#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
 * Complete the function 'factorial' given below
 * @params
 *  n -> an integer whose factorial is to be calculated
 * @return
 *  The factorial of integer n
 */
int factorial(int n)
{
    // Write your code here
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}