#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    // Write your code here
    int n, a = 0, b = 1, c;
    cin >> n;

    if (n >= 1)
    {
        cout << a << endl;
    }
    if (n >= 2)
    {
        cout << b << endl;
    }

    while (n - 2 > 0)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        --n;
    }
    
    return 0;
}