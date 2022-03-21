3.Dynamically allocating space for a pointer depending on input and doing this repeatedly, depending on different inputs and finally de-allocating the pointer.
Blue-print:
	Include header files
	Int main()
{
//read input dynamically allocate & de-allocate space for each type using pointer.
Return 0;
}
Source code:
#include<iostream>
#include<string>
using namespace std;
int main()
{ string s,s1;
cout<<"Enter any of the following \n integer\ncharacter\nstring\ndouble\nfloat\nexit"<<endl;
while(1)
{
cout<<"Enter input type "<<endl;
cin>>s;
if(s=="character")
{
char *c = new char;
cout<<"Enter character "<<endl;
cin>>c;
cout<<"Entered is "<<*c<<endl;
delete c;
}
else if(s == "exit")
{
exit(0);
}
else if (s=="string")
{
string *s1 = new string;
cout<<"Enter a line "<<endl;
getline(cin,*s1);
getline(cin,*s1);
cout<<"Entered is "<<*s1<<endl;
delete s1;
}
else if(s=="integer")
{
int *i = new int;
cout<<"Enter a number "<<endl;
cin>>*i;
cout<<"Entered is "<<*i<<endl;
delete i;
}
else if(s=="double" || "float")
{
double *d = new double;
cout<<"Enter a number "<<endl;
cin>>*d;
cout<<"Entered is "<<*d<<endl;
delete d;
}
else
{
cout<<"Enter valid type "<<endl;
}
}
return 0;
}
