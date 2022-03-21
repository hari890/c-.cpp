17.Input manipulators. Overriding operators <>
Source Code:
#include<iostream>
using namespace std; 
int main() 
{ 
string s; 
getline(cin,s); 
cout<<s<<endl;//endl gives cursor to next line 
cout<<"This is hello"<<flush; // using flush makes the cursor remain same position 
cout<<"hello  world"<<ends; // ends gives a single blank character 
}
Overriding <<,>>
#include<iostream>
using namespace std;
class Complex
{
int real,img;
public:
Complex(int r=0, int i=0)
{
real = r;img = i;
}
friend ostream & operator << (ostream &out, const Complex &c);
friend istream & operator >> (istream &in, Complex &c);
};
ostream & operator << (ostream &out, const Complex &c) //using const bcoz other objects cant modify
{
out<< c.real;
out<< "+i" <<c.img<<endl;
return out;
}
istream & operator >> (istream &in, Complex &c)
{
cout<<" Enter real part ";
in>>c.real;
cout<<" Enter Imaginary part ";
in>>c.img;
}
int main()
{
Complex c1;
cin>>c1;
cout<<"The Complex Object is ";
cout<<c1;
return 0;
}
