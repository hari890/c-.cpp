#include<iostream>
using namespace std;
class Vector
{
  public:
    int len;
    int *arr;
    Vector(){
    	arr=new int;
    	len=0;
    }
    void push(int a){
        *(arr+(len++))=a;
    }
    void size(){
    	cout<<"size of vector is "<<len<<endl;
    }
    void isEmpty(){
    	(len==0)?cout<<"Vector is empty\n":cout<<"Vector is not empty\n";
    }
    void display(){
    	if(arr == NULL){
	    	cout<<"Empty vector\n";
	    	return;
	    }
    	for(int i=0;i<len;i++){
	    	cout<<arr[i]<<endl;
	    }
    }
    int operator()(int i){
    	return arr[i];
    }
    void operator+(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be added!";
	    	return;
	    }
	    for(int i=0;i<len;i++){
    		cout<<arr[i]+v(i)<<endl;
    	}
    }
    int operator==(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be compared!";
	    	return -1;
	    }
	    for(int i=0;i<len;i++){
    		if(arr[i] != v(i)){
		    	return 0;
		    }
    	}
    	return 1;
    }
    void operator++(int){
	    for(int i=0;i<len;i++){
    		cout<<arr[i]+1<<endl;
    	}
    }
    void operator++(){
	    for(int i=0;i<len;i++){
    		cout<<arr[i]+1<<endl;
    	}
    }
    void operator+=(int a){
	    for(int i=0;i<len;i++){
    		cout<<arr[i]+a<<endl;
    	}
    }
    int operator<(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be compared!";
	    	return -1;
	    }
	    for(int i=0;i<len;i++){
    		if(arr[i]>=v(i)){
		    	return 0;
		    }
    	}
    	return 1;
	}
	int operator>(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be compared!";
	    	return -1;
	    }
	    for(int i=0;i<len;i++){
    		if(arr[i]<= v(i)){
		    	return 0;
		    }
    	}
    	return 1;
	}
	int operator>=(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be compared!";
	    	return -1;
	    }
	    for(int i=0;i<len;i++){
    		if(arr[i]< v(i)){
		    	return 0;
		    }
    	}
    	return 1;
	}
	int operator<=(Vector v){
    	if(len != v.len){
	    	cout<<"Only vectors of same size can be compared!";
	    	return -1;
	    }
	    for(int i=0;i<len;i++){
    		if(arr[i]> v(i)){
		    	return 0;
		    }
    	}
    	return 1;
	}
    ~Vector(){
    	cout<<"Object destroyed\n";
    }
};
int main(){
	Vector v;
	v.push(1);
	v.push(2);
	v.push(3);
	Vector v2=v;
	cout<<(v==v2);
	return 0;
}
