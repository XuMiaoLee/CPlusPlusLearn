#include <iostream>
#include <pthread.h>

using namespace std;

#define MAX_THREAD_COUNT 5

void* sample1_print(void* args)
{
    cout << "thread stared!" << endl;
    return NULL;
}

void sample1(){
    pthread_t t;
    /*
    arg1:指向线程标识符指针
    arg2:一个不透明的属性对象，可以被用来设置线程属性。您可以指定线程属性对象，也可以使用默认值 NULL。
    arg3:线程运行函数起始地址，一旦线程被创建就会执行。
    arg4:运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。
    */
    int result = pthread_create(&t,NULL,sample1_print,NULL);
    if(result !=0 )
    {
        cout << "thread create error = " << result << endl;
    }
}

int main()
{
    sample1();
    return 0;
}
