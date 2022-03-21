11.Define class matrix of integers with all possible operations like constructor, destructor, copy constructor and assignment operators>, <,<=, <=, ==, ++ (pre and post), +, +=, ().
Source Code:
#include<iostream>
using namespace std;
class matrix
{
int rows,col,i,j;
int **m;
public:
matrix()//Default Constructor
{
}
matrix(int r,int c)// Parameterized constructor
{
rows = r;
col=c;
m=new int*[rows];
for(i=0;i<rows;i++)
{
m[i]= new int [col];
}
}
matrix(const matrix&cpy)//Copy Constructor
{
rows=cpy.rows;
col=cpy.col;
m=cpy.m;
}
matrix operator =(const matrix&rhs)//Assignment operator
{
rows=rhs.rows;
col=rhs.col;
m=rhs.m;
}
matrix operator >(const matrix &rhs)
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
}
matrix operator >=(const matrix &rhs)
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
}
matrix operator <(const matrix &rhs)
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
}
matrix operator <=(const matrix &rhs)
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
}
matrix operator ==(const matrix &rhs)
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
}
matrix operator +=(const matrix &rhs)
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=m[i][j]+rhs.m[i][j];
}
}
}
matrix operator +(const matrix &rhs)
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=m[i][j]+rhs.m[i][j];
}
}
}
matrix operator ++()//Pre increment
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
++m[i][j];
}
}
}
matrix operator ++(int)//Post increment
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
m[i][j]++;
}
}
}
void enter()
{
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
cin>>m[i][j];
}
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
~matrix()//Destructor called
{
}
};
int main()
{
matrix m1(2,2),m2(2,2);
cout<<"Enter matrix 1 elements "<<endl;
m1.enter();
cout<<"Printing using assignment operator"<<endl;
m2=m1;
m2.print();
matrix m3(m1);
cout<<"Printing using copy constructor "<<endl;
m3.print();
cout<<"Enter matrix 2 elements "<<endl;
matrix m4(2,2);
m4.enter();
m1>m4;
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
