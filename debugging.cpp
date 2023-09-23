// #include <iostream>
// using namespace std;

// int main()
// {
//     // char c;
//     // cin >> c;
//     // if ('a' <= c || c <= 'z')
//     // {
//     //     cout << -1;
//     // }
//     // else if ('A' <= c || c <= 'Z')
//     // {
//     //     cout << 1;
//     // }
//     // else
//     // {
//     //     cout << 0;
//     // }

// }

/*
Pattern
1
23
345
4567
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i < n)
//     {
//         int j = i, count = 0;
//         while (count < i)
//         {
//             cout << j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout << "\n";
//         i = i + 1;
//     }
// }

/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int i = 0;
    // while (i < n)
    // {
    //     int j = i, count = 2 * n + 1, gaps = (n - i + 0), k = 1;
    //     while (k < gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     int m = 0, ch = count - 2 * gaps;
    //     while (m < ch)
    //     {
    //         cout << "*";
    //         m = m + 1;
    //     }
    //     k = 1;
    //     while (k < gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     cout << "\n";
    //     i = i + 1;
    // }
    int x=1;
    x = (x << 1) + x + (x >> 1);
    cout<<x;
}