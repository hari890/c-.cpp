2.Function overloading: writing string operations like strcat and strncat, strcpy and strncpy as overloaded functions.
Blue-print:
	Include header files
	void strcpy(string,int);
void strcpy(string);
void strcat(string,string);
void strcat(string,string,int);
int main()
{
//read two strings
//use switch call the given functions in each the cases.
return 0;
}


Source Code:
#include<iostream>
#include<string>
using namespace std;
void strcpy(string,int);
void strcpy(string);
void strcat(string,string);
void strcat(string,string,int);
int main()
{
int ch,n;
string str1,str2;
while(1)
{cout<<"\n 1:string n concatenation\t 2:string concatenation\t 3:stringcopy\t 4:string n copy\t
5:exit"<<endl;
cout<<"choose an option"<<endl;
cin>>ch;
switch(ch)
{case 1:strcat(str1,str2,n);
break;
case 2:strcat(str1,str2);
break;
case 3:strcpy(str1);
break;
case 4:strcpy(str1,n);
break;
case 5:exit(0);
default:cout<<"entered wrong choice"<<endl;
}
}
}
void strcat(string first,string second,int n)
{ string s;
int i;
cout<<"enter 2 strings"<<endl;
cin>>first>>second;
s=first+second;
cout<<"enter no of letters to be shown after concatenation"<<endl;
cin>>n;
for(i=0;i<n;i++)
cout<<s[i];
}
void strcat(string str1,string str2)
{cout<<"enter two strings"<<endl;
cin>>str1>>str2;
cout<<"the required concatenated string is"<<str1.append(str2)<<endl;
}
void strcpy(string a)
{string b;
cout<<"enter a string"<<endl;
cin>>a;
b=a;
cout<<"the given string is copied as"<<b<<endl;
}
void strcpy(string c,int p)
{string d;
int i;
cout<<"enter the string"<<endl;
cin>>c;
d=c;
cout<<"enter the no of letters to be executed"<<endl;
cin>>p;
cout<<"the required string is"<<endl;
for(i=0;i<p;i++)
cout<<d[i];
}
