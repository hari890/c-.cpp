16.Formatted input-output examples
Source Code:
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=5;
cout<<setw(5)<<a<<endl;//5 spaces width and then printing
cout<<"Hii"<<endl;//For this 5 spaces width will not get printed
double d=40.598687;
cout<<setprecision(4)<<d<<endl;//Precision restricted to 4 characters
char ch='K';
cout.width(10);
cout.fill('*');//By calling this it fills the blankspaces to symbol specied here in example *
cout<<ch<<endl;
cout<<"This is "<<setw(5)<<setfill(' ')<<"KRP"<<endl; //prints "This is" and 5 spaces and "KRP"
}
