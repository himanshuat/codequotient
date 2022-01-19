#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr, int start, int end)
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
    return arr;
}

vector<int> reverseSubarray(vector<int> arr, int k)
{
    if (k == 1 || k == 0)
    {
        return arr;
    }
    
    int n = arr.size();
    int start = 0, end = k - 1;
    bool reversed = false;

    if (end >= n)
    {
        end = n - 1;
    }

    while (!reversed)
    {
        arr = reverseArray(arr, start, end);
        start += k;
        end += k;
        if (end >= n)
        {
            end = n - 1;
            reversed = true;
        }
    }
    return arr;
}

int main()
{
    int i, n, k;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    vector<int> res;
    res = reverseSubarray(arr, k);
    for (i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}