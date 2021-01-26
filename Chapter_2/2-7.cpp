// 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数。
// void函数以下面的格式显示这两个值。
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28
#include <iostream>
using namespace std;

void show_time(int hour, int minutes);

int main()
{
    int hour, minutes;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    show_time(hour, minutes);
    return 0;
}

void show_time(int hour, int minutes)
{
    cout << "Time: " << hour << ":" << minutes << endl;
}