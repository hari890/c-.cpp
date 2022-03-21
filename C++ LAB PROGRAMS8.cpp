8.Defineclass stack,queue,linked-list,array,set usingsomedata-type(int)withdatamembers kept as private and functions kept in both protected and public sections.
Source code:
#include<iostream>
#include <cstdlib>
#include<set>
#define size 20
#define sizeq 20
using namespace std;
int top=-1;
int front =0;
int rear=0;
struct Node {
int data;
struct Node *next;
}*head=NULL,*temp,*ptr;
class stackss
{
int data;
//int top=-1;
int stacks[size];
public:
void push(int data)
{
if(top>=size)
{
cout<<"Stack is full "<<endl;
}
else
{
top=top+1;
stacks[top]=data;
}
}
void pop()
{
int temp;
if(top<=0)
{
cout<<"Stack is empty "<<endl;
}
else
{
temp=stacks[top];
top=top-1;
cout<<"Data popped is "<<temp<<endl;
}
}
void stack_print()
{
int i=top;
while(i>=0)
{
cout<<stacks[i]<<endl;
i--;
}
}
};
class queues
{
int queue[sizeq];
int data;
public:
void push(int data)
{
queue[rear]=data;
rear++;
}
void pop()
{
int temp;
temp=queue[front];
front++;
cout<<"Element popped is "<<temp<<endl;
}
void queue_print()
{
int i=front;
while(i<rear)
{
cout<<queue[i]<<endl;
i++;
}
}
};
class linked_list
{
public:
void insert(int data)
{
temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
{
temp->next=head;
head=temp;
}
}
void delet()
{
int t;
ptr=head;
t=ptr->data;
head=ptr->next;
ptr->next=NULL;
free(ptr);
cout<<"Element deleted is "<<t<<endl;
}
void linked_print()
{
ptr=head;
while(ptr!=NULL)
{
cout<<ptr->data<<endl;
ptr=ptr->next;
}
}
};
class arrays
{
int a[10],n;
public:
arrays()
{
}
void insert(int n)
{
int i=0;
for(i=0;i<n;i++)
{
cout<<"Enter data "<<endl;
cin>>a[i];
}
}
void arrays_print(int n)
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
};
int main()
{
cout<<"Stack Operations "<<endl;
stackss s;
s.push(20);
s.push(40);
s.push(50);
s.stack_print();
s.pop();
s.pop();
s.stack_print();
cout<<"Queue operations "<<endl;
queues q;
q.push(10);
q.push(30);
q.push(60);
q.queue_print();
q.pop();
q.pop();
q.queue_print();
cout<<"Linked list operations "<<endl;
linked_list l;
l.insert(7);
l.insert(8);
l.insert(9);
l.linked_print();
l.delet();
l.delet();
cout<<"Array operations are "<<endl;
arrays a1;
a1.insert(4);
a1.arrays_print(4);
cout<<"Set operations are "<<endl;
set<int> s1;
s1.insert(11);
s1.insert(2);
s1.insert(3);
cout<<"Set values are "<<endl;
set<int>::iterator it1;
for(it1=s1.begin();it1!=s1.end();it1++)
{
cout<<*it1<<" ";
}
s1.erase(3);
cout<<endl<<"After deleting element set values are "<<endl;
set<int>::iterator it2;
for(it2=s1.begin();it2!=s1.end();it2++)
{
cout<<*it2<<" ";
}
}
