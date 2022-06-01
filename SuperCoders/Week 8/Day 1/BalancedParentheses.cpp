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
	stack<char> stack;

	for (int i = 0; i < strlen(exp); ++i)
	{
		if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
		{
			stack.push(exp[i]);
		}
		else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
		{
			if (stack.empty())
			{
				return false;
			}
			else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
			{
				if (stack.empty() || matchingBracket(exp[i]) != stack.top())
				{
					return false;
				}
				else
				{
					stack.pop();
				}
			}
		}
	}
	
	return stack.empty() ? true : false;
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