6.Define class matrix of integers with all possible operations like constructor, destructor, copy constructor and assignment operators
Blue-print:
Source code:
#include<iostream>
using namespace std;
class matrix
{
int row,col,i,j;
int **m;//While declaring 2d array we should use **m if 1d array *m
public:
matrix()//Default constructor
{
}
matrix(int r,int c)
{
row=r;
col=c;
m= new int*[row];
for(i=0;i<row;i++)
{
m[i]=new int [col];
}// If declaring a 2d array dynamically we have to use above 5 lines
}
matrix(const matrix & cpy)//Copy Constructor
{
cout<<"Copy constructor invoked "<<endl;
row=cpy.row;
col=cpy.col;
m=cpy.m;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=cpy.m[i][j];
}
}
}
matrix operator =(const matrix &rhs)
{
row=rhs.row;
col=rhs.col;
m=new int *[row];
for(i=0;i<row;i++)
{
m[i]=new int [col];
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
m[i][j]=rhs.m[i][j];
}
}
//return *this;
}
void print()
{
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<m[i][j]<<" "<<endl;
}
}
}
void enter()
{
m= new int*[row];
for(i=0;i<row;i++)
{
m[i]=new int [col];
cout<<"Enter values of matrix"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>m[i][j];
}
}
}
}
~matrix()//Destructor
{
}
};
int main()
{
matrix m1(1,2),m2(1,2);
cout<<"Enter matrix 1 elements "<<endl;
m1.enter();
cout<<"Enter matrix 2 elements "<<endl;
m2.enter();
matrix m3(1,2);
cout<<"Assignment operator "<<endl;
m3=m1;
m3.print();
cout<<"Using copy constructor "<<endl;
matrix m4(m2);
m4.print();
return 0;
}
