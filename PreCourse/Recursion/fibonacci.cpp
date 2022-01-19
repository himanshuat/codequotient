#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void fibonacci(int* arr, int num, int i)
{
    if (i > num)
    {
        return;
    }
    arr[i - 1] = arr[i - 2] + arr[i - 3];
    fibonacci(arr, num, i + 1);
}

int main()
{
    int n;
    cin >> n;

    int fibonacciSequence[n];
    fibonacciSequence[0] = 0;
    fibonacciSequence[1] = 1;

    fibonacci(fibonacciSequence, n, 3);

    for (int i = n - 1; i >= 0; --i)
    {
        cout << fibonacciSequence[i] << endl;
    }

    return 0;
}