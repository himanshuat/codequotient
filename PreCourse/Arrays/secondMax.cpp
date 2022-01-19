#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int secondMax(int* arr, int n)
{
    int max = INT16_MIN;
    int secMax = INT16_MIN;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < max && arr[i] > secMax)
        {
            secMax = arr[i];
        }
    }

    if (max == secMax || secMax == INT16_MIN)
    {
        return 0;
    }
    return secMax;
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << secondMax(arr, n);
    
    return 0;
}
