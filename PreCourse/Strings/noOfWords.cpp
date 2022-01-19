#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#include <cstring>

int countWords(char str[])
{
    if (strlen(str) == 0)
    {
        return 0;
    }
    
    int count = 0, i = 0;
    bool succeedsChar = false;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (succeedsChar)
            {
                ++count;
            }
            succeedsChar = false;
        }
        else 
        {
            succeedsChar = true;
        }
        ++i;
    }
    return count + 1;
}

int main()
{
    char str[100] = "\0";
    int num;
    scanf("%[^\n]", str);
    num = countWords(str);
    cout << num;
    return 0;
}