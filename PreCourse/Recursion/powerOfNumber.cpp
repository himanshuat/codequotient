#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int power(int num, int pow)
{
    if (pow < 0)
    {
        return -1;
    }
    else if (pow == 0)
    {
        return 1;
    }
    else if (pow == 1)
    {
        return num;
    }
    return num * power(num, pow - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}