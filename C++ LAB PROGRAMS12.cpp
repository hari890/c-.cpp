12.Define class matrix of integers using vector, with all possible operations like constructor, destructor, copy constructor and assignment operators>, <,<=, <=, ==, ++ (pre and post),+,+=, ( ).
Source code:
#include<iostream>
#include<vector>
using namespace std;
class matrix
{
int rows,col,i,j;
vector<vector<int> > m;
public:
matrix()//Default constructor
{
}
matrix(int r,int c)
{
rows=r;
col=c;
}
matrix(const matrix&cpy)//Copy Constructor
{
cout<<"Displaying using copy constructor"<<endl;
rows=cpy.rows;
col=cpy.col;
m=cpy.m;
}
matrix& operator =(const matrix &rhs)
{
cout<<"Displaying using assignment operator"<<endl;
rows=rhs.rows;
col=rhs.col;
m=rhs.m;
return *this;
}
matrix& operator >(const matrix &rhs)
{
int c1=0,c2=0;
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
if(m[i][j]>rhs.m[i][j])
{
c1++;
}
else if(m[i][j]<rhs.m[i][j])
c2++;
}
}
if(c1>c2)
cout<<"First matrix is larger"<<endl;
else
cout<<"Second matrix is larger"<<endl;
return *this;
}
matrix& operator >=(const matrix &rhs)
{
int c1=0,c2=0;
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
if(m[i][j]>rhs.m[i][j])
{
c1++;
}
else if(m[i][j]<rhs.m[i][j])
{
c2++;
}
}
}
if(c1>c2)
cout<<"First matrix is larger"<<endl;
else if(c1==c2)
cout<<"Both matrices are equal"<<endl;
else
cout<<"Second matrix is larger"<<endl;
return *this;
}
matrix& operator <(const matrix &rhs)
{
int c1=0,c2=0;
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
if(m[i][j]<rhs.m[i][j])
{
c1++;
}
else if(m[i][j]>rhs.m[i][j])
c2++;
}
}
if(c1>c2)
cout<<"First matrix is smaller"<<endl;
else
cout<<"Second matrix is smaller"<<endl;
return *this;
}
matrix& operator <=(const matrix &rhs)
{
int c1=0,c2=0;
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
if(m[i][j]<rhs.m[i][j])
{
c1++;
}
else if(m[i][j]>rhs.m[i][j])
c2++;
}
}
if(c1>c2)
cout<<"First matrix is smaller"<<endl;
else if(c1=c2)
cout<<"Both matrices are equal"<<endl;
else
cout<<"Second matrix is smaller"<<endl;
return *this;
}
matrix& operator ==(const matrix &rhs)
{
int cnt=0;
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
if(m[i][j]==rhs.m[i][j])
cnt++;
}
}
if(cnt==rows*col)
cout<<"Both matrices are equal"<<endl;
else
cout<<"Both matrices are not equal"<<endl;
return *this;
}
matrix& operator +=(const matrix &rhs)
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=m[i][j]+rhs.m[i][j];
}
}
return *this;
}
matrix& operator +(const matrix &rhs)
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=m[i][j]+rhs.m[i][j];
}
}
return *this;
}
matrix& operator ++()//Pre increment
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
++m[i][j];
}
}
return *this;
}
matrix& operator ++(int)//Post increment
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]++;
}
}
return *this;
}
void enter()
{
cout<<"Enter elements "<<endl;
for(i=0;i<rows;i++)
{
int t;
vector<int> m1;
for(j=0;j<col;j++)
{
cin>>t;
m1.push_back(t);
}
m.push_back(m1);
}
}
void print()
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
}
~matrix()//Destructor
{
}
};
int main()
{
matrix m1(2,2);
m1.enter();
m1.print();
matrix m2(m1);
m2.print();
matrix m3;
m3=m1;
m3.print();
matrix m4(2,2);
m4.enter();
m4>m1;
m1<m4;
m1<=m4;
m1>=m4;
m1==m4;
m1+=m4;
cout<<"Adding using shorthand operator"<<endl;
m1.print();
m1+m4;
cout<<"Adding using binary operator"<<endl;
m1.print();
cout<<"Pre incrementing operators "<<endl;
++m3;
m3.print();
cout<<"Post incrementing operators "<<endl;
m3++;
m3.print();
}
