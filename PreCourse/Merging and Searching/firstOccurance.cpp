#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

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

        int index = -1;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == k)
            {
                index = i;
                break;
            }
        }
        cout << index << endl;
	}
    return 0;
}