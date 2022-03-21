Define stack and queue inherited from array class, with standard functions and operators.
Source Code:
#include<iostream>
using namespace std;
#define size 20
int top=-1,front=0,rear=0;
class arrays
{
public:
int a[size];
void insert(int t)
{
a[++top]=t;
}
};
class stacks:public arrays
{
public:
void push(int ele)
{
if(top>=size)
cout<<"Stack is full"<<endl;
else
a[++top]=ele;
}
void pop()
{
int t;
if(top<=-1)
cout<<"Stack is empty "<<endl;
else
{
cout<<"Element popped is "<<a[top]<<endl;
top--;
}
}
void display()
{
cout<<"Stack elements are "<<endl;
for(int i=top;i!=-1;i--)
cout<<a[i]<<endl;
}
};
class queues:public arrays
{
public:
void enqueue(int t)
{
if(top>=size)
cout<<"Queue is full"<<endl;
else
a[rear++]=t;
}
void dequeue()
{
int t;
if(top==front)
cout<<"Queue is empty "<<endl;
else
{
cout<<"Element dequeue is "<<a[front]<<endl;
front++;
}
}
void displayq()
{
cout<<"Elements in queue are "<<endl;
for(int i=front;i<rear;i++)
cout<<a[i]<<endl;
}
};
int main()
{
arrays a;
stacks s;
s.push(10);
s.push(20);
s.push(30);
s.pop();
s.display();
queues q;
q.enqueue(50);
q.enqueue(60);
q.enqueue(70);
q.displayq();
q.dequeue();
q.displayq();
}
