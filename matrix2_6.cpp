#include<iostream>

using namespace std;
class matrix{
	public:
	int rows;
	int cols;
	int *arr;
	matrix(int r,int c){
		rows=r;
		cols=c;
		arr = new int[r*c];
	}
	void add(int a,int i,int j){
		*(arr + i * cols + j) = a;
	}
	void display(){
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		cout<<*(arr + i * cols + j)<<" ";
			}
			cout<<endl;
		}
	}
	int get(int i,int j){
	return *(arr+i*cols+j);
	}
	matrix(matrix &a){
		rows=a.rows;
		cols=a.cols;
		arr=new int [rows*cols];
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		*(arr+i*cols+j)=a.get(i,j);
        	}
		}
	}
	void add_mat(matrix &a){
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		int val=*(arr+i*cols+j)+a.get(i,j);
		        cout<<val<<" ";
        	}
        	cout<<endl;
		}
	}
	void sub_mat(matrix &a){
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		int val=*(arr+i*cols+j)+a.get(i,j);
        		cout<<val<<" ";
        	}
        	cout<<endl;
		}
	}
	void mul_mat(matrix &a){
		int val;
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		val=0;
        		for(int k=0;k<rows;k++){
		        	val+=*(arr+i*cols+k)*a.get(k,j);
				}
				cout<<val<<" ";
        	}
        	cout<<endl;
		}
	}
	
	~matrix(){
		cout<<"matrix destroyed\n";
	}
};
int main()
{
	matrix m(3,3);
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        	m.add(i+j,i,j);
        }
	}
	matrix m2(3,3);
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        	m2.add(i+j+1,i,j);
        }
	}
 	cout<<"matrix m:\n";
    	m.display();
   	cout<<"matrix m2:\n";
    	m2.display();
	return 0;
}}
