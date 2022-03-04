#include <iostream>

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
        *(arr+len)=a;
        len++;
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
    void clear(){
    	delete arr;
    	len=0;
    }
    void front(){
    	cout<<"first Element is "<<*(arr)<<endl;
    }
    void back(){
    	cout<<"first Element is "<<*(arr+(len-1))<<endl;
    }
    ~Vector(){
    	cout<<"Object destroyed\n";
    }
};
int main()
{
    Vector v,v2;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.front();
    v.back();
    cout<<"Elements in the vector:\n";
    v.display();
    cout<<"front elemen in vector:\n";
    v.front();
    cout<<"last element in vector:\n";
    v.back();
    cout<<"Size of the vector is:\n";
    v.size();
    return 0;
}
