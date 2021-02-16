// 编写一个程序，要求用户以整数输入秒数（使用long或long long变量存储）
// 然后以天、小时、分钟和秒显示这段时间。
// 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。
// 程序输出与下面类似：
// Enter the number of seconds: 3160000
// 3160000 secodes = 365 days, 17 hours, 46 minutes, 40 seconds.

#include <iostream>
using namespace std;

const int DAY_TO_HOURS = 24;
const int HOUR_TO_MINUTES = 60;
const int MINUTE_TO_SECONDS = 60;

int main()
{
    long input_second;
    int days, hours, minutes;
    cout << "Enter the number of seconds: ";
    cin >> input_second;
    cout << input_second << " secondes = ";
    // 计算天数
    days = input_second / (DAY_TO_HOURS * HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    input_second = input_second % (DAY_TO_HOURS * HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    // 计算小时数
    hours = input_second / (HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    input_second = input_second % (HOUR_TO_MINUTES * MINUTE_TO_SECONDS);
    // 计算分钟数
    minutes = input_second / MINUTE_TO_SECONDS;
    input_second = input_second % MINUTE_TO_SECONDS;
    //显示
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << input_second << " secondes." << endl;
    return 0;
}