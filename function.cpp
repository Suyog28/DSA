#include <iostream>
using namespace std;

// 1.Maximum of Three numbers

// void printMaxNum(int num1, int num2, int num3)
// {
//     if (num1 >= num2 && num1 >= num3)
//     {
//         cout << "Num1 is Max number:" << num1 << endl;
//     }
//     else if (num2 >= num1 && num2 >= num3)
//     {
//         cout << "Num2 is Max Number:" << num2 << endl;
//     }
//     else
//     {
//         cout << "Num3 is max Number:" << num3 << endl;
//     }
// }

int printMaxNum(int n1, int n2, int n3)
{
    int ans = max(n1, n2);
    int result = max(ans, n3);

    return result;
}

int main()
{

    int maximum = printMaxNum(15, 5, 39);
    cout << "Maximum number is:" << maximum << endl;
}