#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

/*类模板*/
template <class T>
class Stack
{
    private:
        vector<T> elements;
    public:
        /*压栈*/
        void push(T const& element)
        {
            elements.push_back(element);
        }
        /*删除最后一个元素*/
        void pop()
        {
            elements.pop_back();
        }
        /*获取栈顶元素*/
        T top() const
        {
            if(elements.empty())
            {
                throw out_of_range("current stack not elements!");
            }
            return elements.back();
        }
        /*判断是否为空*/
        bool empty() const
        {
            return elements.empty();
        }
};

/*函数模板*/
template <typename T>
inline T const& Max(T const& a,T const& b)
{
    return a < b ? b : a;
}

int main()
{
    Stack<int> intStack;
    Stack<string> stringStack;

    intStack.push(7);
    cout << "intStack取值： " << intStack.top() << endl;

    stringStack.push("许渺lee");
    cout << "stringStack取值：" << stringStack.top() << endl;

    int a = 10;
    int b = 12;

    cout << "max value: " << Max(a,b) << endl;
    return 0;
}