#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class CQStack
{
    int maxSize; // size of stack array
    int *stackArray;
    int top; // top of stack

public:
    // constructor
    CQStack(int s)
    {
        maxSize = s;                   // set array size
        stackArray = new int[maxSize]; // create array
        top = -1;                      // no items yet
    }

    // Add element on the top of the stack
    void push(int j)
    {
        if (isFull())
        {
            return;
        }
        else
        {
            stackArray[++top] = j; // increment top, insert item
        }
    }

    // Remove element from the top of the stack
    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            int temp = stackArray[top--];
            return temp; // access item, decrement top
        }
    }

    // Return true is stack is empty
    bool isEmpty()
    {
        return (top == -1);
    }

    // Return true if stack is full
    bool isFull()
    {
        return (top == maxSize - 1);
    }
};

/* pop(),push(int j) already defined in stack */

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

int evalPostfix(CQStack *stack, string exp)
{
    int length = exp.length();

    for (int i = 0; i < length; i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^')
        {
            int op2 = stack->pop();
            int op1 = stack->pop();
            int ans = result(op1, op2, exp[i]);
            stack->push(ans);
        }
        else
        {
            stack->push(exp[i] - '0');
        }
    }
    
    return stack->pop();
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string expr;
        CQStack *stack = new CQStack(1000);
        cin >> expr;
        int result = evalPostfix(stack, expr);
        cout << result << endl;
    }
    return 0;
}