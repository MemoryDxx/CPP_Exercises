// 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为1加仑的里程，即油耗
// 如果愿意，也可以要求用户以千米为单位输入距离，并以升为单位输入汽油量，然后输出每100KM的耗油量
#include <iostream>
using namespace std;

int main()
{
    float distance, flue;
    cout << "请输入行驶距离（千米）： ";
    cin >> distance;
    cout << "请输入耗油量（升）： ";
    cin >> flue;
    cout << "每100KM耗油量为" << flue / distance * 100 << endl;
    return 0;
}