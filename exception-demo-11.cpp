#include <iostream>

using namespace std;

double division(int a,int b);

int main()
{
    double result;
    try
    {
        result = division(10,0);
        cout << "result = " << result << endl;
    }catch(const char* msg)
    {
        cerr << msg << endl;
    }
    return 0;
}

double division(int a,int b)
{
    if(b == 0)
    {
        throw "Division by zero condition!";
    }
    return a / b;
}