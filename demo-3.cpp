#include <iostream>
#include <string>

using namespace std;

/*
字符串
*/
int main()
{
    string str1 = "hello";
    string str2 = "world";
    string str3;

    //将str1赋值给str3
    str3 = str1;
    cout << "str3 = " << str3 << endl;

    //拼接str1和str2
    str3 = str1 + str2;
    cout << "str1 + str2 = " << str3 << endl;

    //str3的长度
    cout << "str3 length = " << str3.length();
    return 0;
}