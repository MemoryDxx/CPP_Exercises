// 编写一个程序，要求用户以度、分、秒的方式输入一个维度，然后以度为单位显示该维度。
// 1°等于60′，1′等于60″，请以符号常量的方式表示这些值。
// 对于每个输入值，应使用一个独立的变量存储它。
// 下面是该程序的输出：
/*
Enter a latitude in degrees, minutes, and seconds:
First, enter the degree: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>
using namespace std;

const float MINUTE_TO_DEGREE = 60;
const float SECOND_TO_MINUTE = 60;

int main()
{
    int degree, minute, second;
    float degree_transd;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    degree_transd = degree + minute / MINUTE_TO_DEGREE + second / SECOND_TO_MINUTE / MINUTE_TO_DEGREE;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree_transd << " degrees";
    return 0;
}