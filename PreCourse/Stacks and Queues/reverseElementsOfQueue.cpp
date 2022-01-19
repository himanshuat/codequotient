#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class Queue
{
    int *queue;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size)
    {
        this->capacity = size;
        queue = new int[size];
        front = 0;
        rear = 0;
    }
    void enQueue(int data)
    {
        if (rear == capacity)
        {
            cout << "Overflow\n";
            return;
        }
        queue[rear++] = data;
    }
    int deQueue()
    {
        if (front == rear)
        {
            return -1;
        }
        return queue[front++];
    }
    bool isEmpty()
    {
        return front == rear;
    }
    int size()
    {
        return rear - front;
    }
};

// class Queue{
//   void enQueue(data);
//   int deQueue(data);
//   bool isEmpty();
// }
// The above class is used to declare the functions

#include <stack>

void reverseKElementsQueue(Queue *queue, int k)
{
    stack<int> firstKElements;
    int length = queue->size();
    Queue *remainingElements = new Queue(length - k);

    for (int i = 0; i < k; i++)
    {
        firstKElements.push(queue->deQueue());
    }
    for (int i = k; i < length; i++)
    {
        remainingElements->enQueue(queue->deQueue());
    }
    
    for (int i = 0; i < k; i++)
    {
        queue->enQueue(firstKElements.top());
        firstKElements.pop();
    }
    for (int i = k; i < length; i++)
    {
        queue->enQueue(remainingElements->deQueue());
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        Queue *queue = new Queue(100);
        while (n--)
        {
            int x;
            cin >> x;
            queue->enQueue(x);
        }
        reverseKElementsQueue(queue, k);
        while ((n = queue->deQueue()) != -1)
            cout << n << ' ';
        cout << endl;
    }
}