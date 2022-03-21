4.Define class complex with all possible operations: constructor, destructor, copy constructor, assignment operator with the data members stored as pointer to integers.
Blue-print:
Include header files
Class complex{
Public:   complex();
	complex(int,int);
	complex(const complex &);
	complex operator =(const complex &);
	~complex();
};
	Int main()
{
//create complex type objects and call its constructors,assignment operator function &       
desctructors
Return 0;
}

Source code:
#include<iostream>
using namespace std;
class Complex
{
int *real,*img;
public:
Complex()//Default COnstructor
{
real=0;
img=0;
}
Complex(int x, int y) //Constructor
{
real =new int;
img=new int;
*real = x;
*img=y;
cout<<"Values inside Constructor is "<<*real<<"+i"<<*img<<endl;
}
Complex(const Complex &c) //Copy Constructor
{
real= c.real;
img=c.img;
cout<<"Values inside Copy Constructor "<<*real<<"+i"<<*img<<endl;
}
Complex operator=(const Complex &ca)
{
real = ca.real;
img = ca.img;
cout<<"Values using Assignment Operators "<<*real<<"+i"<<*img<<endl;
}
~Complex() //Destructor
{
cout<<"Destructor called "<<endl;
}
};
int main()
{
Complex c1(20,30);
Complex c2(10,40);
Complex c3;
//Using Assignmnet operator
c3=c1;
//Using Copy Contructor
Complex c4(c1);
}
