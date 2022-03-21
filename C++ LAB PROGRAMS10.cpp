10.Define class vector of integers with all possible operations like constructor, destructor, copy constructor and assignment operators>, =, <=, ==, ++ (pre and post), +, +=, ().
Source Code:
#include<iostream>
#include<vector>
using namespace std;
class vectors
{
int n;
vector<int> v;
public:
vectors()
{
}
vectors(int x)
{
n=x;
}
vectors operator <(const vectors &rhs)
{
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
if(v[i]<rhs.v[i])
{
c1++;
}
else if(v[i]>rhs.v[i])
{
c2++;
}
}
if(c1<c2)
{
cout<<"2nd vector is smaller"<<endl;
}
else
{
cout<<"1st vector is smaller"<<endl;
}
}
vectors operator >(const vectors &rhs)
{
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
if(v[i]>rhs.v[i])
{
c1++;
}
else if(v[i]<rhs.v[i])
{
c2++;
}
}
if(c1>c2)
{
cout<<"1st vector is larger"<<endl;
}
else if(c1<c2)
{
cout<<"2nd vector is larger"<<endl;
}
}
vectors operator <=(const vectors &rhs)
{
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
if(v[i]<rhs.v[i])
{
c1++;
}
else if(v[i]>rhs.v[i])
{
c2++;
}
}
if(c1<c2)
{
cout<<"2nd vector is smaller"<<endl;
}
else if(c1==c2)
{
cout<<"Both are same "<<endl;
}
else
{
cout<<"1st vector is smaller"<<endl;
}
}
vectors operator >=(const vectors &rhs)
{
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
if(v[i]>rhs.v[i])
{
c1++;
}
else if(v[i]<rhs.v[i])
{
c2++;
}
}
if(c1>c2)
{
cout<<"1st vector is larger"<<endl;
}
else if(c1==c2)
{
cout<<"Both are equal"<<endl;
}
else
{
cout<<"2nd vector is larger"<<endl;
}
}
vectors operator ==(const vectors &rhs)
{
int cnt=0;
for(int i=0;i<n;i++)
{
if(v[i]==rhs.v[i])
{
cnt++;
}
}
if(cnt==n)
{
cout<<"Both vectors are equal"<<endl;
}
else
cout<<"Both vectors are not equal"<<endl;
}
vectors operator +=(const vectors &rhs)
{
for(int i=0;i<n;i++)
{
v[i]=v[i]+rhs.v[i];
}
}
vectors operator +(const vectors &rhs)
{
for(int i=0;i<n;i++)
{
}
}
vectors operator =(const vectors &rhs)
{
v=rhs.v;
cout<<"Assignment operator printing "<<endl;
return *this;
}
void print()
{
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<endl;
}
}
void enter()
{
int t;
cout<<"Enter elements "<<endl;
for(int i=0;i<n;i++)
{
cin>>t;
v.push_back(t);
}
}
};
int main()
{
vectors v1(3);
v1.enter();
vectors v2;
v2=v1;
v2.print();
vectors v3(3);
v3.enter();
v1<v3;
v1<=v3;
v1>v3;
v1>=v3;
v1==v3;
v1+=v3;
v1.print();
}
