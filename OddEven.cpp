#include <iostream>
using namespace std;

void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number is even:" << num << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}

int main()
{
    evenOdd(78);
}