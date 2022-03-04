#include<iostream>
using namespace std;
int main(){
	int *a = new int;
	char *b = new char;
	float *c = new float;
	double *d = new double;
	cout<<"Enter the value a: ";
	cin>>*a;
	cout<<"Enter the character b: ";
	cin>>(*b);
	cout<<"Enter the float c: ";
	cin>>(*c);
	cout<<"Enter the double d: ";
	cin>>(*d);
	cout<<"integer a = "<<*a<<endl;
	cout<<"character b = "<<*b<<endl;
	cout<<"float c = "<<*c<<endl;
	cout<<"double d = "<<*d<<endl;
	delete a;
	delete b;
	delete c;
	delete d;
	return 0;
  }
