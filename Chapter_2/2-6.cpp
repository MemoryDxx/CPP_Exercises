// 编写一个程序，其main()调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）
// 该程序按下面的格式要求用户输入光年值，并显示结果：
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.
// 1 light years = 63240 astrononmical untis
#include <iostream>
using namespace std;

float trans(float light_years);

int main()
{
    float light_years, astronomical_units;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    astronomical_units = trans(light_years);
    cout << light_years << " light years = " << astronomical_units << " astronomical units." << endl;
    return 0;
}

float trans(float light_years)
{
    float astronomical_units;
    astronomical_units = light_years * 63240;
    return astronomical_units;
}