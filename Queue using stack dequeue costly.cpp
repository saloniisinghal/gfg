#include <bits/stdc++.h>
#include <iostream>
#define MAX 100
using namespace std;
class Queue{
    public:
    stack<int> s1,s2;
    void enqueue(int x);
    int dequeue();
    void display();

};

void Queue:: enqueue(int x)
{
    s1.push(x);
}

int Queue:: dequeue()
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    int x=s2.top();
    s2.pop();
    while(s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}

void Queue:: display()
{
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main()
{
	Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";

    q.enqueue(6);
    q.enqueue(7);
    q.display();
	return 0;
}
