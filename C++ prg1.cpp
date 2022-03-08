#include<iostream>
using namespace std;
void passbyvalue(int x, int y)
{
int sum=0,t=0;
sum=x+y;
cout<<"Addition through pass by value is "<<sum<<endl;
t=x;
x=y;
y=t;
cout<<"Swapping through pass by value "<<x<<" "<<y<<endl;
}
void passbyreference(int *x, int *y)
{
int sum=0,t;
sum=*x+*y;
cout<<"Addition through pass by reference is "<<sum<<endl;
t=*x;
*x=*y;
*y=t;
cout<<"Swapping through pass by value "<<*x<<" "<<*y<<endl;
}
void passArray(int *ar,int n)
{
int i, sum=0;
for(i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element " ;
cin>>ar[i];
sum=sum+ar[i];
}
cout<<"Sum of given array is "<<sum<<endl;
}
int main()
{
int a,b,n;
cout<<"Enter two values for call by value & refrence ";
cin>>a>>b;
passbyvalue(a,b);
cout<<"Pass by values "<< a <<ends<< b <<endl;
passbyreference(&a,&b);
cout<<"Enter required no. of elements for passing array"<<endl;
cin>>n;
int ar[n];
passArray(ar,n);
return 0;
}
