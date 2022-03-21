9.Define class complex with all possible operators: constructor, destructor, copy constructor, assignment operator and operators >, =, <=, ==, ++ (pre and post), +, +=, ( ), with the data members stored as pointer to integers.
Source Code:
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
class Complex
{
int real,imag,mag;
public:
Complex()
{
}
Complex(int r,int i)
{
real=r;
imag=i;
}
Complex operator () (int r,int i,int m)
{
Complex d;
d.real=r;
d.imag=i;
d.mag=m;
return d;
}
Complex operator > (const Complex &rhs)
{
if(real>rhs.real && imag>rhs.imag)
{
cout<<"1st object is larger "<<endl;
}
else
{
cout<<"2nd object is larger "<<endl;
}
}
Complex operator < (const Complex&rhs)
{
if(real<rhs.real&& imag<rhs.imag)
{
cout<<"1st object is smaller "<<endl;
}
else
{
cout<<"2nd object is smaller "<<endl;
}
}
Complex operator >= (const Complex&rhs)
{
if(real>rhs.real && imag>rhs.imag)
{
cout<<"1st object is larger "<<endl;
}
else if(real==rhs.real && imag==rhs.imag)
{
cout<<"Both are equal "<<endl;
}
else
{
cout<<"2nd object is larger "<<endl;
}
}
Complex operator <= (const Complex&rhs)
{
if(real<rhs.real&& imag<rhs.imag)
{
cout<<"1st object is smaller "<<endl;
}
else if(real == rhs.real && imag == rhs.imag)
{
cout<<"Both are equal "<<endl;
}
else
{
cout<<"2nd object is smaller "<<endl;
}
}
Complex operator ++() //Pre Increment
{
Complex c;
c.real=++real;
c.imag=++imag;
return c;
}
Complex operator ++(int) //Post Increment
{
Complex c;
c.real=real++;
c.imag=imag++;
return c;
}
Complex operator + (const Complex &rhs)
{
Complex c;
c.real=real+rhs.real;
c.imag=imag+rhs.imag;
return c;
}
Complex operator += (const Complex &rhs)
{
Complex c;
c.real=real+rhs.real;
c.imag=imag+rhs.imag;
return c;
}
Complex operator = (const Complex &rhs)
{
real=rhs.real;
imag=rhs.imag;
}
void print()
{
Complex c;
cout<<"Real value is "<<real<<endl;
cout<<"Imaginary value is "<<imag<<endl;
}
void printm()
{
Complex c;
cout<<"Real value is "<<real<<endl;
cout<<"Imaginary value is "<<imag<<endl;
cout<<"Magnitude part is "<<mag<<endl;
}
~Complex() //Destructor
{
}
};
int main()
{
Complex c1(1,2),c2(3,4);
c1>c2;
c1<c2;
cout<<"Post Incrementing "<<endl;
c1++;
c1.print();
cout<<"Pre Incrementing "<<endl;
++c2;
c2.print();
cout<<"Adding two classes "<<endl;
Complex c3=c1+c2;
c3.print();
cout<<"Adding using short hand operators "<<endl;
c3.operator +=(c2);
c3.print();
cout<<"Assignment operator overloading "<<endl;
Complex c4;
c4=c1;
c4.print();
cout<<"Paranthesis operator overloading "<<endl;
Complex c5=c2(5,4,6);
c5.printm();
}
