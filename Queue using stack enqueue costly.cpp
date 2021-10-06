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
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
}

int Queue:: dequeue()
{
    if(s1.empty())
        return -1;
    int x=s1.top();
    s1.pop();
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