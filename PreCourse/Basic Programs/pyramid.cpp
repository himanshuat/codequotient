#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int val = i;
        bool increment = false;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (val == 1)
            {
                increment = true;
            }
            cout << val;
            if (increment)
            {
                ++val;
            }
            else
            {
                --val;
            }
        }
        cout << endl;
    }
    
    return 0;
}