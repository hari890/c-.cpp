5.Define class vector of integers with all possible operations like constructor, destructor, copy constructor and assignment operators.
Blue-print:
Include header files
Class complex{
Public:   vector();
	complex(int);
	vector(const vector &);
	vector operator =(const vector &);
	~vector();
};
	Int main()
{
//create vector  type objects and call its constructors,assignment operator function &       
desctructors
Return 0;
}
Source code:
#include<iostream>
using namespace std;
class vector
{
int n,i,*a;
public:
vector()
{
}
vector(int n):n(n)
{
a=new int[n];
cout<<"enter elements into the vector:"<<endl;
for(i=0;i<n;++i)
{
std::cin>>a[i];
}
cout<<"displaying elements using constructor"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<"";
}

cout<<endl;
}
vector(vector &t)
{
n=t.n;
a=t.a;
cout<<"after assigning using copy cons values are :"<<endl;
for(int i=0;i<n;++i)
cout<<a[i]<<""<<endl;
}
vector&operator=(const vector&t)
{
int n=t.n;
a=t.a;
cout<<"after assigning values using =operator are:"<<endl;
for(int i=0;i<n;++i)
cout<<a[i]<<"";
cout<<endl;
}
~vector()
{cout<<"destructor called"<<endl;
}
};
int main()
{
vector obj1(4);
vector obj2(obj1);
vector obj3;
obj3=obj1;
return 0;
}
