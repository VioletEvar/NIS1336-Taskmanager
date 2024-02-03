#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>
#include <cctype>
#include <sstream>
#include <mutex>
#include <thread>
#include <iomanip>
#include "account.h"


//输出帮助界面的函数
void help(){
        std::cout <<"-----------------------------------------------------------------------" << std::endl;
        std::cout << "这是帮助界面" << std::endl;
        std::cout << "输入用户名和密码进入使用界面(如未创建账户会自动创建)" << std::endl;
        std::cout << "使用界面中，输入showtask显示任务表" << std::endl;
        std::cout << "使用界面中，输入addtask添加任务" <<std::endl;
        std::cout << "使用界面中，输入deltask删除任务" <<std::endl;
        std::cout << "使用界面中，输入quit退出程序" <<std::endl;
        std::cout << "使用界面中，输入h显示帮助界面" << std::endl;
        std::cout <<"-----------------------------------------------------------------------" << std::endl;
}

//判断用户文件是否已创建的函数
bool isCreated(std::string filename){
        std::ifstream inputfile(filename);
        if (!inputfile) {
            return false;
        }
        return true;
}

//创建用户任务文件的函数
int createFile(std::string filename){
        if(isCreated(filename)){
                return 0;//返回0代表已有用户文件
        }
        std::ofstream userfile(filename);
        if (!userfile.is_open()) {
            std::cout << "无法创建文件 " << filename << " 进行写入！" << std::endl;
            return -1;//返回-1代表创建失败
        }
        userfile.close();
        std::cout << "文件创建成功!" << std::endl;
        return 1;//返回1代表创建成功
}

//更新用户文件的函数
void AccountManager::update(){
        //清空用户文件
        //重新创建用户文件
        std::string newfilename = username + "_task.txt";//由用户名构造文件名确保后缀准确识别
        std::ofstream newfile(newfilename);

        //将密码写入第一行
        newfile << passwordHash << std::endl;
        //将最大ID号写入第二行
        newfile << max_id  << std::endl;
        //将任务表写入新的用户文件
        //范围-based for 循环，它遍历 tasks 向量中的每个元素，并将当前元素赋值给变量 task。
        //const 修饰符表示 task 是一个常量引用，以确保不会对 data 中的元素进行修改。
        for(const Task& task : tasks){
                newfile << task.reminderTime << " " << task.name << " " << task.startTime << " " << task.category << " " << task.priority << " " << task.id << std::endl;
        }
        newfile.close();
        std::cout << "文件更新成功!" << std::endl;
}

bool AccountManager::sortTaskFunction(Task a, Task b) {
    return a.startTime < b.startTime;//返回先开始的任务
}

//检测同名同开始时间任务是否存在
bool AccountManager::taskExist(Task a){
        for (const Task& task : tasks){
                if(task.name == a.name && task.startTime == a.startTime){
                        return true;
                }
        }
        return false;
}

//对用户任务按开始时间排序
void AccountManager::sortTasksByStartTime() {
    std::sort(tasks.begin(), tasks.end(), sortTaskFunction);//将任务表按任务开始时间先后排序
}

// 密码哈希算法，改变大小写，数字保持不变
std::string AccountManager::calculatePasswordHash(const std::string& password) const {
    std::string hashedPassword = "";
    int special_value = 0;//根据密码大写字母、小写字母及数字个数在哈希值结尾插入用户特殊值
    //遍历密码字符串，改变字母大小写，生成密码哈希
    for (char c : password) {
        if (std::isalpha(c)) {
            if (std::isupper(c)) {
                hashedPassword += std::tolower(c);
                special_value += 2;
            }
            else {
                hashedPassword += std::toupper(c);
                special_value += 7;
            }
        }
        else {//读到数字时跳过
            hashedPassword += c;
            special_value +=11;
        }
    }
    hashedPassword += std::to_string(special_value);
    return hashedPassword;

}

//用户初始化函数，创建用户名、密码和用户任务文件
    //检测是否已创建账户
    //若有，则直接打开已经创建的账号文件
    //若无，则新建一个账号文件
AccountManager::AccountManager(const std::string& input_username, const std::string& input_password) :username(input_username){
    std::string filename = input_username + "_task.txt";//为所有用户文件名添加固定后缀"_task.txt"
    max_id = 0;//初始化最大任务序号为0
    int filestate = createFile(filename);//创建整型变量接收createFile函数返回值
    std::string input_passwordHash = calculatePasswordHash(input_password);//计算输入密码的哈希值
//根据用户文件创建情况进行初始化处理
    switch(filestate){
case 0:{//已有用户文件
        std::ifstream is(filename);//打开用户文件
        std::string saved_passwordHash;
        std::getline(is, saved_passwordHash);//获取储存在用户文件第一行的密码哈希
        //判断输入密码是否正确
        if(input_passwordHash == saved_passwordHash){//输入密码正确
                passwordHash = saved_passwordHash;//初始化该账号密码哈希
                //将文件中数据录入账号的tasks任务表
                std::string line;
                std::getline(is,line);
                max_id = std::stoi(line);//读入文件中最大ID号
                while (std::getline(is, line)) {
                Task task;
                std::istringstream iss(line);//将每行文件加载到istringstream流iss上
                iss >> task.reminderTime >> task.name >> task.startTime >> task.category >> task.priority >> task.id ;//利用iss为任务各项数据成员赋值
                tasks.push_back(task);//添加任务到任务表中
                }
                is.close();//关闭文件
        }
        break;
}
case -1:{//用户文件创建失败
        std::cout << "调用文件创建函数失败!" << std::endl;
        break;
}
case 1:{//新用户，创建用户文件成功
        std::cout << "成功调用文件创建函数" << std::endl;
        passwordHash = input_passwordHash;//初始化密码哈希值
        max_id = 0;//初始化最大任务序号为0
        //将密码写入用户文件第一行
        std::ofstream os(filename);//以写入模式打开用户文件
        if(!os.is_open()){
                std::cout << "无法打开文件!" << std::endl;
        }
        os << passwordHash <<std::endl;
        //将最大任务id写入用户文件第二行
        os << max_id <<std::endl;
        os.close();//关闭用户文件

        break;
}
default:{//其他异常情况
        std::cout << "未知错误，账号创建不成功!"<< std::endl;
        break;
}

    }
        return;
}

//验证输入密码是否正确的函数
bool AccountManager::authenticate(const std::string& password) const {
    // 将输入的密码进行哈希运算，并与保存的哈希值进行比较
    std::string inputHash = calculatePasswordHash(password);
    return inputHash == passwordHash;
}

//添加任务的函数
void AccountManager::addTask(const Task& task) {
    //检测任务是否已存在
    if(taskExist(task)){
            std::cout << "任务已存在!" << std::endl;
            max_id--;//防止max_id出现+2跳变
            return;
    }
    //若任务不存在，则添加至任务表
    else{
            tasks.push_back(task);
            update();//更新用户文件
    }
}

//删除任务的函数
bool AccountManager::deleteTask(const int taskId) {
        //遍历任务表查找编号为taskId的任务，若找到则删除
    bool result = false;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == taskId) {
            tasks.erase(it);//调用vector类自带函数erase()从任务表中删除;为使用此函数，故for循环使用指针遍历tasks矢量
            result = true;
            break;
        }
    }
    if(result){
            update();//更新用户文件
    }
    return result;
}

//显示任务的函数
void AccountManager::showTasks() {
// 将任务表中任务根据开始时间排序
    sortTasksByStartTime();
    std::cout <<"-----------------------------------------------------------------------" << std::endl;
    //遍历任务表，依次输出编号、任务名、开始时间、优先级、分类、提醒时间
    std::cout <<std::setw(3)<< "ID|" << std::setw(13) << "Name|" << std::setw(21)<< "Start Time|" << std::setw(17) << "Priority|" << std::setw(17)<< "Category|" << std::setw(22) <<"Reminder Time" << std::endl;
    for (const Task& task : tasks) {
        std::cout <<std::setw(2)<< task.id << "|" << std::setw(12) << task.name << "|" << std::setw(20) << task.startTime << "|" << std::setw(16) << task.priority << "|" << std::setw(16)<< task.category << "|" << std::setw(21) << ctime(&task.reminderTime)  <<std::endl;//利用ctime函数将time_t类型变量转化为tm结构体变量输出
    }
    std::cout <<"-----------------------------------------------------------------------" << std::endl;
}

//修改任务的函数
void AccountManager::changeTask(const Task& task) {
	bool deleted = deleteTask(task.id); //从数组里删去同ID的task
	if(deleted){
                tasks.push_back(task); //向数组里加入新task
                update();//更新用户文件
	}
        return;
}


//提供文件名的接口函数
std::string AccountManager::getFilename(){
        return filename;
}

//提供用户名的接口函数
std::string AccountManager::getUsername(){
        return username;
}


