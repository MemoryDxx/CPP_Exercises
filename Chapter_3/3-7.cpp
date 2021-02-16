// 编写一个程序，要求用户按欧洲风格输入汽车的油耗（每100KM消耗的汽油量，单位是升），然后转换为美国风格的耗油量——每加仑多少英里
// 美式油耗（距离/燃料）与欧式油耗（燃料/距离）相反。
// 100KM = 62.14mile，1加仑 = 3.785升

#include <iostream>
using namespace std;

const float HKM_TO_MILE = 62.14;
const float GAL_TO_LITER = 3.875;

int main()
{
    // AVG为每百公里油耗，MPG为每加仑英里数 
    float AVG, MPG;
    cout << "请输入油耗（L/100Km）： ";
    cin >> AVG;
    MPG = HKM_TO_MILE / (AVG / GAL_TO_LITER);
    cout << "每100Km油耗： " << AVG << endl;
    cout << "每加仑里程： " << MPG << endl;
    return 0;
}