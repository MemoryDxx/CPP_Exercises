// 编写一个程序，要求用户输入全球当前人口和美国当前人口（或其他国家人口）。
// 将这些信息存储在long long变量中，使程序输出显示美国（或其他国家人口）的人口占全世界人口的百分比。
// 该程序的输出应与下面类似：
// Enter the world's population: 6898758899
// Enter the population of USA :310783781
// The population of the USA is 4.50492% of the world population.

#include <iostream>
using namespace std;

int main()
{
    long long W_population, U_population;
    double rate;
    cout << "Enter the world's population: ";
    cin >> W_population;
    cout << endl;
    cout << "Enter the population of USA: ";
    cin >> U_population;
    rate =100 * ((double)U_population / (double)W_population);
    cout << "The population of the USA is " << rate << "% of the world population." << endl;
    return 0;
}