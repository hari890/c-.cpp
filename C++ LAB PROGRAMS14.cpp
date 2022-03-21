14.Define a class called ‘array’ with data type passed as template type with constructor, destructor, copy constructor and assignment operators and index operator.
Source Code:
#include<iostream>
using namespace std;
template<typename T> //General declaration of class or function template
class arrays
{
T *a;
int n;
public:
arrays()
{
}
arrays(int size)//Constructor
{
n=size;
a=new T[n];
}
arrays(const arrays&cpy)
{
cout<<"Copy constructor"<<endl;
n=cpy.n;
a=cpy.a;
}
arrays& operator =(const arrays&rhs)
{
cout<<"Assignment operator"<<endl;
n=rhs.n;
a=rhs.a;
}
void enter()
{
cout<<"Enter elements "<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
}
void print()
{
for(int i=0;i<n;i++)
cout<<a[i]<<endl;
}
~arrays()//Destructor
{
}
};
int main()
{
//arrays <int>a1; ---General declaration of class template in main
arrays <int>a1(5);
a1.enter();
arrays <int>a2(a1);
a2.print();
arrays <int>a3;
a3=a1;
a3.print();
}
