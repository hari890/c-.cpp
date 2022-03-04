#include<iostream>
using namespace std;
template <typename type>
class Array{
	public:
	type *arr;
	int len;
	Array(){
		arr= new type;
		len=-1;
	}
	Array(Array &a){
		a->arr=arr;
	}
	~Array(){
		cout<<"Object destroyed\n";
	}
	int operator[](int i){
		return *(arr+i);
	}
	void add(int a){
		arr[++len]=a;
	}
	void display(){
		for(int i=0;i<=len;i++){
			cout<<arr[i]<<endl;
		}
	}
};
int main(){
	Array<int> a;
	a.add(1);
	a.add(6);
	a.add(7);
	
	return 0;
}
