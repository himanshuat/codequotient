#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void moveElements(int arr[], int n)
{
    int result[n];
    int k = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= 0)
        {
            result[k] = arr[i];
            ++k;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            result[k] = arr[i];
            ++k;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        arr[i] = result[i];
    }
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    moveElements(arr, size);
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}
