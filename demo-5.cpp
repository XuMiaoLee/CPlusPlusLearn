#include <iostream>

using namespace std;

int main()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "年:" << 1900 + ltm -> tm_year << endl;
    cout << "月:" << 1 + ltm -> tm_mon << endl;
    cout << "日:" << ltm -> tm_mday << endl;
     return 0;
}