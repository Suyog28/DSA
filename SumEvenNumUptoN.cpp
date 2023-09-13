#include <iostream>
using namespace std;

void sumEvenNumUptoN(int n)
{
    int sum = 0;
    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     sum = sum + i;
    // }
    // cout << "Sum of All Even Number:" << sum << endl;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of All Even Number:" << sum << endl;
}

int main()
{
    sumEvenNumUptoN(10);
}