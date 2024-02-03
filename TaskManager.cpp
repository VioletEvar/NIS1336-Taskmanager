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
#include <chrono>//引入chrono时间库控制线程休眠时间
#include "account.h"

//将命名空间 std::chrono 中的字面量后缀引入当前的命名空间，以便直接使用这些字面量
using namespace std::chrono_literals;

std::mutex fileMutex;//创建全局互斥锁变量
bool quit_program = false;

//闹铃线程函数
void userAlarm(std::string filename){

        while(!quit_program){
                std::this_thread::sleep_for(2002ms);
                std::lock_guard<std::mutex> lock(fileMutex);//锁住文件
                time_t now; //读取当前时间
                time(&now);
    std::ifstream inf(filename);
    if(!inf){//检测是否成功打开

     std::cout << "fail to open the file" << std::endl;
    }
                //读取本地文件
                time_t tasktime;
                std::string line;
                std::string taskname,startime;
                //遍历匹配时间判断是否提醒
                while(getline(inf,line)){
                  std::istringstream is(line);//分割每一行字符，提取年月日时分进行写入
                  if(is >> tasktime >> taskname >> startime){
                                        time_t diff = now - tasktime;
                                        if(diff <= 1 && diff >= -1){
                                                //Remind
                                                std::cout<<std::endl;
                                                std::cout<<taskname<<"将于"<<startime<<"开始"<<std::endl;
                                                continue;
                                        }
                  } //写入格式为 time_t 任务名称 开始时间
                }
        }
}

//用户使用界面线程函数
void userOperate(AccountManager account, bool &quit){
	std::string command;// 创建接收命令行指令的字符串变量command
        // 循环检测用户指令
        while(true){
                std::cin>>command;// 从命令行读入指令
                std::transform(command.begin(), command.end(), command.begin(), ::tolower);//使用vector自带的transform函数将指令中所有字母转换为小写，实现大小写不敏感
                // 执行相应的命令
        if (command == "addtask") {//添加任务
                std::cout<<"请依次输入设置闹钟时间(年 月 日 时 分),任务名，任务开始时间(xxxx/xx/xx/xx:xx)"<<std::endl;
                // 解析其他命令行参数，并创建任务对象
                tm tm_tasktime = {0};//利用ctime库中tm结构体读取闹钟时间
        		Task task;

        		task.id = ++account.max_id;//利用account储存的最大ID号初始化新任务id
        		//由于tm结构体中年从1900年开始，月从0开始，故先利用int变量year、mon接收参数，实现用户按习惯输入时间的改善
        		int year = 0;
        		int mon = 0;
        		std::cin >> year >> mon >> tm_tasktime.tm_mday >> tm_tasktime.tm_hour >> tm_tasktime.tm_min >> task.name >> task.startTime;// >> task.category >> task.priority;
 				//任务类别含缺省值输入
 				std::cout << "请输入任务类别(默认为other类别)" << std::endl;
 				std::cin.get();//去除可能读取的换行符
 				std::string line;
 				std::getline(std::cin, line);//将一行输入读入字符串变量line储存
 				if(line == ""){
                                        task.category = "other";//默认任务类别为其他
 				}
 				else{
                                        task.category = line;
 				}
 				//任务优先级含缺省值输入并检测优先级合法性
                                std::cout << "请输入任务优先级(high | medium | low), 默认为low" << std::endl;
 				std::getline(std::cin, line);
 				if(line == "" || line == "low"){
                                        task.priority = "low";
 				}
 				else if(line == "medium"){
                                        task.priority = "medium";
 				}
 				else if(line == "high"){
                                        task.priority = "high";
 				}
 				else{
                                        std::cout << "输入优先级不符合格式，已设置为low" << std::endl;
                                        task.priority = "low";//输入不合法时设置为low
 				}

 				tm_tasktime.tm_year = year-1900; //tm_year表示从1900后经过的年份
 				tm_tasktime.tm_mon = mon - 1;//tm_mon中月份从0开始，故-1确保月份正确
 				task.reminderTime = mktime(&tm_tasktime);//利用mktime函数将tm结构体转化为time_t型变量储存
 				{
                                        std::lock_guard<std::mutex> lock(fileMutex);//在进行添加任务语句前锁住文件
                                        account.addTask(task);
 				}
                std::cout << "Task added successfully." << std::endl;

        }
        else if (command == "deltask") {
        // 解析其他命令行参数，获取要删除的任务的ID
                int taskId; //创建int变量taskId待删除任务ID
                std::cout << "请输入要删除的任务序号" << std::endl;
                std::cin >> taskId;
                bool deleted = false;
                {
                        std::lock_guard<std::mutex> lock(fileMutex);//在进行删除语句前锁住文件
                        deleted = account.deleteTask(taskId);
                }
                if(deleted){
                        std::cout << "Task deleted successfully." << std::endl;
                }
                else{
                        std::cout << "Task not deleted successfully." << std::endl;
                }

        }
        else if (command == "changetask") {//修改任务
         	std::string filename = account.getUsername() + "_task.txt";//获取文件名
         		std::ifstream inf(filename);
         		if(!inf){//检测是否成功打开用户文件
     				std::cout << "fail to open the file" << std::endl;
   				}
                //读取本地文件
                bool flag = false;
                Task task_c;
                std::cout << "请输入你想修改的任务ID:" ;
                int taskid,id;
		std::cin >> taskid;
                std::string line;
                std::string tasktime,taskname,startime,catagory,priority;
                while(getline(inf,line)){
                  std::istringstream is(line);//分割每一行字符，提取年月日时分进行写入
                  if(is >> tasktime >> taskname >> startime >> catagory >> priority >> id){ //将每一行写入变量
                	if(id == taskid){
                		//从文件中复制指定的task的内容到task_c中 方便后续修改后传入changeTask函数
                		task_c.category = catagory;
                		task_c.priority = priority;
                		task_c.id = id;
                		task_c.name = taskname;
                		task_c.startTime = startime;
                                task_c.reminderTime = stoi(tasktime);
                		int num;
                		flag = true;
                		std::cout << "请输入你想要修改的内容对应的序号（1.任务名称 2.任务开始时间 3.任务类别 4.任务优先级 5.任务提醒时间） : " ;
                		std::cin >> num;
                		switch(num){
                			case 1:{
                				std::cout << "请输入修改后的任务名称：" ;
                				std::cin >> task_c.name;
								break;
							}
                			case 2:{
                				std::cout << "请输入修改后的任务开始时间：" ;
                				std::cin >> task_c.startTime;
								break;
							}
                			case 3:{
                				std::cout << "请输入修改后的任务类别：" ;
                				std::cin >> task_c.category;
								break;
							}
                			case 4:{
                				std::cout << "请输入修改后的任务优先级：" ;
                				std::cin >> task_c.priority;
								break;
							}
                			case 5:{
                				tm t_tasktime = {0};
                				int year, mon;
                				std::cout <<"请依次输入新的提醒时间(年 月 日 时 分):" ;
                				std::cin >> year >> mon >> t_tasktime.tm_mday >> t_tasktime.tm_hour >> t_tasktime.tm_min;
                				t_tasktime.tm_year = year-1900;
 								t_tasktime.tm_mon = mon - 1;
 								task_c.reminderTime = mktime(&t_tasktime);
								break;
							}
                			default:{
                				std::cout << "非法输入！" << std::endl;
								break;
							}
						}
					}
				}
            }
            if(!flag) {
                std::cout << "未找到该任务！" << std::endl; //遍历完文件根据flag判断是否查询到该任务
                continue;
            }
            {
                std::lock_guard<std::mutex> lock(fileMutex);//锁住文件
                account.changeTask(task_c);
            }

	}
        else if (command == "showtask") {//显示任务表中任务
		        account.showTasks();
        }
        else if(command == "h"){//显示帮助界面
                help();
        }
        else if(command == "quit"){//退出程序
                std::cout << "退出成功!" << std::endl;
                quit = true;//将quit变量改为true，作为flag让另一线程函数userAlarm结束
		        break;//结束while循环
        }
        else {
                // 用户输入未知命令
                std::cout << "命令未知" << std::endl;

                //输出帮助界面
                help();
        }
}

}


int main(int argc, char* argv[]) {
    // 解析命令行参数并执行相应操作
    if (argc < 3) {
        help();//输出帮助说明
        return 0;
    }

    std::string username = argv[1];
    std::string password = argv[2];


    // 创建账户管理对象
    AccountManager account(username, password);

    // 如果用户认证失败，则退出程序
    if (!account.authenticate(password)) {
        std::cout << "用户认证失败，请重新登录" << std::endl;
        return 0;
    }

        std::cout << "登录成功!" << std::endl;

        std::thread thread1(userOperate, std::ref(account), std::ref(quit_program));//用户操作模块
        std::string filename = username + "_task.txt";
        std::thread thread2(userAlarm, std::ref(filename));//任务提醒模块


    thread1.join();
    thread2.join();

    return 0;
}


