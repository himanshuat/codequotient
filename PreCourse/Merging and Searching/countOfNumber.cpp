#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int countOfNumber(int* arr, int n, int k)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            break;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    
    int count = 0;

    for (int i = start; i <= end; i++)
    {
        if (arr[i] == k)
        {
            ++count;
        }
    }
    
    return count;
}

int main()
{
    int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << countOfNumber(arr, n, k) << endl;
	}
    return 0;
}