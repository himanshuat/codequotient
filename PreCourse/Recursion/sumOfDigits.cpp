#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int sumOfDigits(int num)
{
    if (num < 10)
    {
        return num;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sumOfDigits(n) << endl;
    }
    return 0;
}