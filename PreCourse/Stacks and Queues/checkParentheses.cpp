#include <bits/stdc++.h>
using namespace std;

char matchingBracket(char c)
{
    if (c == ')')
    {
        return '(';
    }
    else if (c == ']')
    {
        return '[';
    }
    else if (c == '}')
    {
        return '{';
    }
    return ' ';
}

bool areBracketsBalanced(char exp[])
{
    int length = strlen(exp);
    stack<char> parentheses;

    for (int i = 0; i < length; ++i)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            parentheses.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (parentheses.empty() || matchingBracket(exp[i]) != parentheses.top())
            {
                return false;
            }
            else
            {
                parentheses.pop();
            }
        }
    }

    return parentheses.empty() ? true : false;
}

int main()
{
    char exp[100];
    scanf("%s", exp);
    if (areBracketsBalanced(exp))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}