#include <iostream>
#define MAX_SIZE 20
using namespace std;

class Stack
{
private:
    int data[MAX_SIZE];
    int top;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push(int ele);
    int peek();
    int pop();
    void traverse();
};

Stack::Stack()
{
    top=-1;
    for (int i=0;i<MAX_SIZE;i++)
    {
        data[i]=-1;
    }
}

Stack::~Stack(){}

bool Stack::isEmpty()
{
    return (top==-1);
}

bool Stack::isFull()
{
    return (top>=MAX_SIZE-1);
}

void Stack::traverse()
{
    int i=0;
    while (data[i]!=-1)
    {
        cout<<data[i]<<endl;
        i=i+1;
    }
}

void Stack::push(int ele)
{
    if (!isFull())
    {
        top+=1;
        data[top]=ele;
    }
    else
    {
        cout<<"Stack Overflow"<<endl;
    }
}

int Stack::pop()
{
    if(!isEmpty())
    {
        int popped=data[top];
        data[top]=-1;
        top--;
        return popped;
    }
    else
    {
        cout<<"Stack Underflow"<<endl;
    }
}

int Stack::peek()
{
    if(!isEmpty())
    {
        return data[top];
    }
    else
    {
        cout<<"Stack Underflow"<<endl;
    }
}

class Queue
{
private:
    int data[MAX_SIZE];
    int f,r;
public:
    Queue();
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int ele);
    int dequeue();
    int get_front();
    int get_rear();
    void traverse();
};

Queue::Queue()
{
    f=r=-1;
    for (int i=0;i<MAX_SIZE;i++)
    {
        data[i]=-1;
    }
}

Queue::~Queue(){}

bool Queue::isEmpty()
{
    return (r==-1);
}

bool Queue::isFull()
{
    return (r>=MAX_SIZE-1);
}

void Queue::traverse()
{
    int i=0;
    for (i=0;i<MAX_SIZE-1;i++)
    {
        if (data[i]!=-1)
        {
            cout<<"["<<i<<"]"<<"  ->  "<<data[i]<<endl;
        }
    }
}

void Queue::enqueue(int ele)
{
    if (!isFull())
    {
        if (!isEmpty())
        {
            f+=1;
        }
        r+=1;
        data[r]=ele;
    }
    else
    {
        cout<<"Queue Overflow"<<endl;
    }
}

int Queue::dequeue()
{
    if(!isEmpty())
    {
        int dequeued=data[f];
        data[f]=-1;
        f++;
        return dequeued;
    }
    else
    {
        cout<<"Queue Underflow"<<endl;
    }
}

int Queue::get_front()
{
    if(!isEmpty())
    {
        return data[f];
    }
    else
    {
        cout<<"Can't run."<<endl;
    }
}

int Queue::get_rear()
{
    if(!isEmpty())
    {
        return data[r];
    }
    else
    {
        cout<<"Queue Underflow"<<endl;
    }
}

int main()
{
    /*
    Stack s1;
    s1.push(5);
    s1.push(8);
    s1.traverse();
    cout<<""<<endl;
    cout<<s1.pop();
    cout<<""<<endl;
    cout<<""<<endl;
    s1.traverse();
    cout<<s1.peek();
    */
    /*
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(6);
    cout<<endl<<"Traverse:"<<endl<<endl;
    q1.traverse();
    cout<<"Front -> "<<q1.get_front()<<endl;
    cout<<"Rear -> "<<q1.get_rear()<<endl;
    cout<<q1.dequeue()<<" dequeued successfully."<<endl;
    cout<<endl<<"Traverse:"<<endl<<endl;
    q1.traverse();
    cout<<"Front -> "<<q1.get_front()<<endl;
    cout<<"Rear -> "<<q1.get_rear()<<endl;
    return 0;
    */
}
