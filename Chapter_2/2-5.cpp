// 编写一个程序，其中的main()调用一个用户定义的函数（以摄氏度为参数，并返回相应的华氏度）。
// 该程序按下面的格式要求用户输入摄氏度，并显示结果
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit
// 华氏度 = 1.8 * 摄氏度 + 32.0
#include <iostream>
using namespace std;

float trans(float Cel);

int main()
{
    float Cel, Fah;
    cout << "Please enter a Celsius value: ";
    cin >> Cel;
    Fah = trans(Cel);
    cout << Cel << " degrees Celsius is " << Fah << " degress Fahrenheit." << endl;
    return 0;
}

float trans(float Cel)
{
    float Fah;
    Fah = Cel * 1.8 + 32;
    return Fah;
}