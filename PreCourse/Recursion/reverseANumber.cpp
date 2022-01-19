#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void numReverse(int num)
{
    if (num < 10)
    {
        cout << num;
        return;
    }
    cout << num % 10;
    numReverse(num / 10);
    return;
}

int main()
{
    int n;
    cin >> n;
    numReverse(n);
    return 0;
}