//编写一个C++程序，它使用3个用户定义的函数（包括main()），并生成以下输出：
//Three blind mice
//Three blind mice
//See how they run 
//See how they run
//其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余输出。

#include <iostream>
using namespace std;

void print_blind_mice();
void print_see();

int main()
{
    print_blind_mice();
    print_blind_mice();
    print_see();
    print_see();
    return 0;
}

void print_blind_mice()
{
    cout << "Three blind mice" << endl;
}

void print_see()
{
    cout << "See how they run" << endl;
}