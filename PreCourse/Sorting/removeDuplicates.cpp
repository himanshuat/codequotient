#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void removeDuplicates(int *arr, int *size)
{
    int temp[*size];
    int k = 0;
    temp[0] = arr[0];

    for (int i = 0; i < *size; i++)
    {
        if (temp[k] != arr[i])
        {
            ++k;
            temp[k] = arr[i];
        }
    }
    for (int i = 0; i <= k; i++)
    {
        arr[i] = temp[i];
    }
    *size = k + 1;
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}