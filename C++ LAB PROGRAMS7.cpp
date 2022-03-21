7.Define class matrix of integers using vector, with all possible operations like constructor, destructor, copy constructor and assignment operators.
Source code:

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class matrix
{
int rows,col,i,j;
vector<vector<int> >v;
public:
matrix()//Default constructor
{
}
matrix(int r,int c)
{
rows=r;
col=c;
}
matrix& operator =(const matrix& rhs)
{
cout<<"Displaying Assignment operator "<<endl;
rows=rhs.rows;
col=rhs.col;
v=rhs.v;
return *this;
}
matrix(const matrix &cpy)
{
cout<<"Printing using copy constructor "<<endl;
rows = cpy.rows;
col=cpy.col;
v=cpy.v;
}
void enter()
{
int num;
cout<<"Enter elements "<<endl;
for(i=0;i<rows;i++)
{
vector<int> v1;
for(j=0;j<col;j++)
{
cin>>num;
v1.push_back(num);
}
v.push_back(v1);
}
}
void print()
{
for (int i = 0; i < v.size(); i++)
{
for (int j = 0; j < v[i].size(); j++)
{
cout << v[i][j] << " ";
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
matrix m2;
m2=m1;
m2.print();
matrix m3(m1);
m3.print();
return 0;
}
