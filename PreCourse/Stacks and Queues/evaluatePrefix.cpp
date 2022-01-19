#include <iostream>
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;
#define SIZE 100

int Stack[SIZE], top = -1;

int isFull()
{
    return top == (SIZE - 1);
}

int isEmpty()
{
    return top == -1;
}

// Function to add an item to stack.  It increases top by 1
int push(int item)
{
    if (isFull())
    {
        return -1;
    }
    Stack[++top] = item;
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
    int temp;
    if (isEmpty())
    {
        return -1;
    }
    temp = Stack[top--];
    return temp;
}

/*
int Stack[SIZE], top=-1;
int isFull();
int isEmpty();
int push(int item);
int pop();

Above variables are used for Stack, SIZE and top and all are global variables. Also above push and pop functions are provided. */

int result(int a, int b, char c)
{
    if (c == '+')
    {
        return a + b;
    }
    else if (c == '-')
    {
        return a - b;
    }
    else if (c == '*')
    {
        return a * b;
    }
    else if (c == '/')
    {
        return a / b;
    }
    else
    {
        return pow(a, b);
    }
}

int evalPrefix(char *exp)
{
    int length = strlen(exp);

    for (int i = length - 1; i >= 0; --i)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^')
        {
            int op1 = pop();
            int op2 = pop();
            int ans = result(op1, op2, exp[i]);
            push(ans);
        }
        else
        {
            push(exp[i] - '0');
        }
    }
    
    return pop();
}

int main()
{
    int n;
    char *exp, input[100];
    cin >> n;
    exp = input;
    while (n--)
    {
        cin >> exp;
        cout << evalPrefix(exp) << endl;
    }
    return 0;
}