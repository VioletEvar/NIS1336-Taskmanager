#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
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



// 任务结构体 所有输入暂定英文/数字
struct Task {
    int id;         // 任务编号
    std::string name;       // 任务名字
    std::string startTime; // 任务开始时间
    std::string priority;   // 任务优先级，输入规定为 high medium low 三类
    std::string category;   // 任务类别，学习 娱乐 生活 其他等
    time_t reminderTime; // 任务提示时间
};

//输出帮助界面的函数
void help();

// 用户账户管理类
class AccountManager {
        friend void userOperate();//为用户操作界面函数提供接口
private:
    std::string username;//用户名
    std::string filename;//用户文件名
    std::string passwordHash;//密码哈希值
    std::vector<Task> tasks;//存储用户任务表的Task矢量tasks
    static bool sortTaskFunction(Task a, Task b);//用于比较两个任务开始时间顺序的函数
    bool taskExist(Task a);//判断同名同开始时间的任务是否已存在的函数
    void sortTasksByStartTime();//按开始时间对任务进行排序的函数

    std::string calculatePasswordHash(const std::string& password) const;//计算密码哈希值的函数

    void update();    //更新本地文件的函数

public:
    AccountManager(const std::string& input_username, const std::string& input_password);//初始化函数，用于创建一个用户
    int max_id;//用户任务表中最大的任务序号，用于为新任务赋ID值
    std::string getFilename();//向外界提供文件名接口
    std::string getUsername();//向外界提供用户名接口
    bool authenticate(const std::string& password) const;//验证输入密码是否正确
    void addTask(const Task& task);//添加任务
    bool deleteTask(const int taskId);//删除任务
    void showTasks();//显示任务
    void changeTask(const Task& task);//修改任务
};

bool isCreated(std::string filename);//检测文件是否被创建的函数

int createFile(std::string username);//创建文件的函数



#endif // ACCOUNT_H_INCLUDED
