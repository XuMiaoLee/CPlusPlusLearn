#include <iostream>

using namespace std;

/* namespace 用于区分不同包下同名的函数..等，和java中的import类似
*/

namespace first_namespace
{
    void func()
    {
        cout << "first_namespace func" << endl;
    }
}

namespace second_namespace
{
    void func()
    {
        cout << "second_namespace func" << endl;
    }
}

int main()
{
    //调用第一个命名空间的函数
    first_namespace::func();
    //调用第二个命名空间的函数 ，或者使用using namespace second_namespace
    second_namespace::func();
    return 0;
}