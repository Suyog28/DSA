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
        return true;
    }
}

int main()
{
    bool prime = checkPrime(4);

    if (prime)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Not A Prime Number" << endl;
    }
}