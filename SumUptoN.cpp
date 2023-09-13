#include <iostream>
using namespace std;

void sumUptoN(int num)
{
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "Final Sum: " << sum << endl;
}

int main()
{
    sumUptoN(10);
}