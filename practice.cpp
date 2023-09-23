// Prime or not
// Print all prime number upto N

#include <iostream>
using namespace std;

bool checkPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    // int result = checkPrime(n);
    // if (result)
    // {
    //     cout << "Number is prime" << endl;
    // }
    // else
    // {
    //     cout << "Number is not prime" << endl;
    // }

    for (int i = 1; i < n; i++)
    {
        bool result = checkPrime(i);
        if (result)
        {
            cout << i << endl;
        }
    }
}