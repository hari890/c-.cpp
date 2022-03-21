15.Define template functions for compare and use it in the algorithms like bubble sort, insertion sort, merge sort.
Source Code:
#include<iostream>
#include<vector>
using namespace std;
template<typename T>
T compare(T a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]>a[j])
{
swap(a[i],a[j]);
}
}
}
}
template<typename T>
void BubbleSort(T a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
swap(a[i],a[j]);
}
}
}
}
template<typename T>
void InsertionSort(T a1[],int n1)
{
int i, j;
T t;
for (int i = 1; i < n1; ++i)
{
t = a1[i];
j = i - 1;
while (j >= 0 && a1[j] > t)
{
a1[j + 1] = a1[j];
j = j - 1;
}
a1[j + 1] = t;
}
}
template<typename T>
void Merge(T a2[], int l, int h)
{
int z, x, y, m;
vector<T> t(h -l + 1);
m = (l + h) / 2;
z = 0;
x = l;
y = m + 1;
while (x <= m && y <= h)
{
if (a2[x]<a2[y])
{
t[z] = a2[x];
++x, ++z;
}
else
{
t[z] = a2[y];
++y, ++z;
}
}
while(x<=m)
{
t[z] = a2[x];
++x, ++z;
}
while(y<=h)
{
t[z] = a2[y];
++y, ++z;
}
for(int i = l; i <= h; ++i)
{
a2[i] = t[i-l];
}
}
template<typename T>
void MergeSort(T a2[],int l,int h)
{
int m;
if (l < h)
{
m= (l+ h) / 2;
MergeSort(a2,l,m);
MergeSort(a2, m+ 1, h);
Merge(a2,l,h);
}
}
template<typename T>
void print(T a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
int main()
{
int a[5]={5,6,3,8,2};
cout<<"Printing using Bubble Sort"<<endl;
BubbleSort<int>(a,5);
print<int>(a,5);
cout<<endl<<"Printing using Insertion Sort "<<endl;
double a1[5]={9.0,10.7,6.5,6.3,4.5};
InsertionSort<double>(a1,5);
print<double>(a1,5);
cout<<endl<<"Printing using Merge Sort "<<endl;
int a2[5]={9,5,3,6,7};
MergeSort<int>(a2,0,4);
print<int>(a2,5);
}
