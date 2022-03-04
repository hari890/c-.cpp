#include<iostream>
using namespace std;
void swap_by_value(int a,int b)
{
	int temp = a;
	a=b;
	b=temp;
}
void swap_by_reference(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int sum_array(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*(a+i);
	}
	return sum;
}
int main()
{
	int a,b,   
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	swap_by_value(a,b);
	cout<<"values after swap by value\na: "<<a<<"\n"<<"b: "<<b<<"\n";
	swap_by_reference(&a,&b);
	cout<<"values after swap by refernce\na: "<<a<<"\n"<<"b: "<<b<<endl;
	
	//finding sum of elements in the array
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the values of the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sum of the valules in the array is: "<<sum_array(arr,n)<<endl;
	return 0;
}
