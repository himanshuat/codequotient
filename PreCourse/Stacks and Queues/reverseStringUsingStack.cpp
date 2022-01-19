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

/* class CQStack{
    public:
        CQStack(int s); // constructor
        void push(int j); // Add element on the top of the stack
        int pop();  // Remove element from the top of the stack
        bool isEmpty(); // Return true is stack is empty
        bool isFull(); // Return true if stack is full
    };
    CQStack class already defined as per the above blueprint
*/

string reverseString(CQStack *stack, string s)
{
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
        stack->push((int) s[i]);
    }
    s = "";
    for (int i = 0; i < length; i++)
    {
        s += (char) stack->pop();
    }
    return s;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n;
        while (n--)
        {
            CQStack *stack = new CQStack(1000);
            cin >> s;
            s = reverseString(stack, s);
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}