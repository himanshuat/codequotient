#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void reverseArray(int* arr, int start, int end)
{
    int temp;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}

void rotateArray(int* arr, int k, int n)
{
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);
}

int main()
{
    int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cin >> k;
        k = k % n;
        rotateArray(arr, k, n);
        
        for (int i = 0; i < n; ++i)
        {
            if (i != n - 1)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << endl;
            }
        }
	}

    return 0;
}
