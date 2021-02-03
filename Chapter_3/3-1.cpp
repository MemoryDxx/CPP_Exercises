// 编写一个程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
// 使用一个const符号常量来表示转换因子。

#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;

int main()
{
    int height;
    cout << "input your height: _\b";
    cin >> height;
    cout << "身高" << height/FOOT_TO_INCH << "英尺";
    cout << height%FOOT_TO_INCH << "英寸" << endl;
    return 0;
}