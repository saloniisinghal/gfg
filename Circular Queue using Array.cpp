#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Queue{
    public: int front=-1,rear=-1,size;
    int* arr;
    
    Queue(int s)
    {
        size=s;
        arr=new int[s];
    }
    
    void enQueue(int x){
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1))
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
       if(front==-1)
       {
           front=rear=0;
       }
        else
        {
            if(rear==size-1)
                rear=0;
            else
                rear++;
        }
        arr[rear]=x; 
    }
    
    int deQueue(){
        if(front==-1)
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int x=arr[front];
        if(front==rear)
            front=rear=-1;
        else
        {
            if(front==size-1)
                front=0;
            else
                front++;
        }
        return x;
    }
    void displayQueue()
    {
        if(front==-1)
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
	Queue q(7);
    
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
 
    q.displayQueue();
    
    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());
    cout<<endl;
 
    q.displayQueue();
 
    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);
 
    q.displayQueue();
 
    q.enQueue(20);
    return 0;
}