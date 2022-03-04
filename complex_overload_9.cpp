#include<iostream>
#include<cmath>
using namespace std;
class complex{
	public:
		int real;
		int image;
		complex(){
			real = 0;
			image = 0;
		}
		complex(int r,int i){
			real = r;
			image=i;
		}
		int operator<(complex c){
			float z1=sqrt(real*real+image*image);
			float z2=sqrt(c.real*c.real+c.image*c.image); 
			return z1<z2;
		}
		int operator>(complex c){
			float z1=sqrt(real*real+image*image);
			float z2=sqrt(c.real*c.real+c.image*c.image); 
			return z1>z2;
		}
		int operator>=(complex c){
			float z1=sqrt(real*real+image*image);
			float z2=sqrt(c.real*c.real+c.image*c.image); 
			return z1>=z2;
		}
		int operator<=(complex c){
			float z1=sqrt(real*real+image*image);
			float z2=sqrt(c.real*c.real+c.image*c.image); 
			return z1<=z2;
		}
		int operator==(complex c){
			return (real == c.real) && (image == c.image);
		}
		void operator++(){
				real++;
				image++;
		}
		void operator++(int){
				++real;
				++image;
		}
		complex operator+(complex c){
			complex ans;
			ans.real= real+c.real;
			ans.image=image+c.image;
			return ans;
		}
		void operator=(complex c){
			real=c.real;
			image=c.image;
		}
		void display(){
			cout<<real<<"+"<<image<<"i"<<endl;
		}
		
};
int main(){
	complex c1(2,3);
	complex c2=c1;
	complex c3=c1+c2;
	c3.display();
	c3++;
	c3.display();
	if(c1<c2){
		cout<<"equal\n";
	}
	else{
		cout<<"not equal\n";
	};
	return 0;
}
