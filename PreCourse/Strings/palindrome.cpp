#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

// Return true if the string is palindrome, else return false
bool isPalindrome(string str)
{
    // Write your code here
    int start = 0, end = str.size() - 1;

    while (start <= end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        ++start;
        --end;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (isPalindrome(str))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}