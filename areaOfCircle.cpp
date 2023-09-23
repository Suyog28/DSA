#include <iostream>
using namespace std;

float pi = 3.14;
int areaOfCircle(int radius)
{
    float result = pi * radius * radius;
    cout << result;
}

int main()
{
    areaOfCircle(5);
}
