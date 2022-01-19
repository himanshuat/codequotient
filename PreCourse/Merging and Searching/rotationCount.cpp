#include <bits/stdc++.h>
using namespace std;

int rotationCount(int a[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    int T, i, size = 0;
    cin >> T;

    while (T--)
    {
        cin >> size;

        int arr[size];
        for (i = 0; i < size; i++)
            cin >> arr[i];

        cout << rotationCount(arr, size) << endl;
    }
    return 0;
}
