#include <iostream>
#include <exception>

using namespace std;

/* 自定义异常 */
struct myexception : public exception
{
    const char* what() const _NOEXCEPT
    {
        return "Division by zero condition !";
    }
};

double division(int a,int b);

int main()
{
    double result;
    try
    {
        result = division(10,0);
        cout << "result = " << result << endl;
    }catch(myexception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}

double division(int a,int b)
{
    if(b == 0)
    {
        throw myexception();
    }
    return a / b;
}