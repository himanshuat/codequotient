#include <bits/stdc++.h>
using namespace std;

int* merge(int* left, int nL, int* right, int nR, int* arr)
{
    int l = 0, r = 0, a = 0;

    while (l < nL && r < nR)
    {
        if (left[l] <= right[r])
        {
            arr[a] = left[l];
            ++l;
        }
        else
        {
            arr[a] = right[r];
            ++r;
        }
        ++a;
    }
    while (l < nL)
    {
        arr[a] = left[l];
        ++l;
        ++a;
    }
    while (r < nR)
    {
        arr[a] = right[r];
        ++r;
        ++a;
    }
    return arr;
}

int* mergeSort(int* arr, int n)
{
    if (n < 2)
    {
        return arr;
    }

    int mid = (0 + n) / 2;
    int* left = (int*) malloc(mid * sizeof(int));
    int* right = (int*) malloc((n - mid) * sizeof(int));

    for (int i = 0; i < mid; ++i)
    {
        left[i] = arr[i];
    }
    for (int i = 0; i < n - mid; ++i)
    {
        right[i] = arr[mid + i];
    }

    left = mergeSort(left, mid);
    right = mergeSort(right, n - mid);
    arr = merge(left, mid, right, n - mid, arr);

    return arr;
}

int maxToys(int cost[], int n, int X)
{
    cost = mergeSort(cost, n);
    int count = 0, bought = 0;
    
    for (int i = 0; i < n; ++i)
    {
        bought += cost[i];
        if (bought <= X)
        {
            ++count;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    int i, n, sum;
    cin >> sum >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << maxToys(a, n, sum);
    return 0;
}