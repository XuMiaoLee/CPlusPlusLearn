/*
多态
*/

#include <iostream>

using namespace std;

class Shape
{
    protected:
        int width,height;
    public:
        Shape(int width = 0,int height = 0)
        {
            this -> width = width;
            this -> height = height;
        }

        /* virtual 虚函数 是在基类中使用关键字 
        virtual声明的函数。在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。 
        */
        virtual int area()
        {
            cout << "Shape area() called !" << endl;
            return 0;
        }

        /* 纯虚函数，用于定义规范，类似于接口和抽象类（c++中是抽象类），子类必须实现这个函数；否则会报错
        unimplemented pure virtual method 'test' in 'Rectangle'
        virtual int test() = 0;
        */
        // virtual int test() = 0;
};

class Rectangle : public Shape
{
    public:
        Rectangle(int width = 0, int height = 0) : Shape(width,height){}
        int area()
        {
            cout << "Rectangle area() called !" << endl;
            return width * height;
        }
};

class Triangle : public Shape
{
    public:
        Triangle(int width = 0, int height = 0) : Shape(width,height){}
        int area()
        {
            cout << "Triangle area() called !" << endl;
            return width * height / 2;
        }
};

int main()
{
    Shape *shape = NULL;
    Triangle triangle(10,5);
    Rectangle rectangle(12,4);
    shape = &triangle;
    shape -> area();

    shape = &rectangle;
    shape -> area();
    return 0;
}