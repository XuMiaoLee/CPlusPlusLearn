#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        //构造函数，每次创建对象时执行
        Person(string name,int age)
        {
            this -> name = name;
            // this -> age = age;
            (*this).age = age;
        }
        //析构函数,没有返回值和参数，删除创建的对象是调用，一般用于释放资源
        ~Person()
        {
            cout << "Person Released" << endl;
        }

        //拷贝构造函数,用于对象拷贝
        Person(const Person &p)
        {
            this -> name = p.name;
            this -> age = p.age;
            cout << "拷贝构造函数调用了！" << endl;
        }

        //友元函数
        friend void printlnName(const Person &p);

        void setAge(int age);
        int getAge()
        {
            return age;
        }
        void setName(string name)
        {
            this -> name = name;
        }
        string getName()
        {
            return name;
        }
};

/*
:: 作用域区分符，指明一个函数属于哪个类或一个数据属于哪个类。
:: 可以不跟类名，表示全局数据或全局函数（即非成员函数）。
*/
void Person::setAge(int a)
{
    age = a;
}

/*
友元函数
*/
void printlnName(const Person &p)
{
    cout << "友元函数 name= " << p.name << endl;
}

int main()
{
    // Person person;
    // person.setAge(20);
    // cout << "age = " << person.getAge() << endl;

    Person p("许渺lee",18);
    Person copyPerson = p;
    cout << "姓名 = " << p.getName() << endl;
    cout << "拷贝对象姓名 = " << copyPerson.getName() << endl;

    printlnName(p);
    return 0;
}