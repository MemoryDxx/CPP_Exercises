// 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重（使用3个变量来存储这些信息）
// 该程序可以报告体重指数。
// 为了计算BMI，该程序以英寸为单位指出用户的身高（1英尺=12英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）
// 然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。
// 计算BMI，即体重除以身高的平方。
// 用符号常量表示各种转换因子。

#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;
const float INCH_TO_METER = 0.0254;
const float KILOGRAM_TO_POUND = 2.2;

int main()
{
    int height_FOOT, height_INCH;
    float weight_POUND, weight;
    float height, BMI;
    cout << "请输入身高：";
    cout << "\t英尺：";
    cin >> height_FOOT;
    cout << "\t英寸：";
    cin >> height_INCH;
    cout << "请输入体重：";
    cin >> weight_POUND;
    height = (height_FOOT * FOOT_TO_INCH + height_INCH) * INCH_TO_METER;
    weight = weight_POUND / KILOGRAM_TO_POUND;
    BMI = weight / (height * height);
    cout << "你的BMI是：" << BMI << endl;
    return 0;
}