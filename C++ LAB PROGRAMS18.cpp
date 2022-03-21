18./*Overriding operators <<, >> */ 
#include<bits/stdc++.h> 
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
Output:
Enter real part 10 
Enter Imaginary part 20
The Complex Object is 10+i20
