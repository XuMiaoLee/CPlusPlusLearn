/*
基本输入输出流
*/

#include <iostream>
#include <string>

using namespace std;

//输入流
void input();
//错误流
void error();
//日志流
void log();

int main()
{
    // input();
    // error();
    log();
    return 0;
}

void input()
{
    string name;
    cout << "请输入名字：";
    cin >> name;
    cout << "您的名字是：" + name << endl;
}

void error()
{
    cerr << "测试cerr" << endl;
}

void log()
{
    clog << "Error Message Zz" << endl;
}