#include<iostream>
using namespace std;
class matrix{
	public:
		int *arr;
		int row;
		int col;
		matrix(){
			
		}
		matrix(int r,int c){
			arr= new int[r*c];
			row=r;
			col=c;
		}
		void fill_mat(){
			int x;
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cin>>x;
					*(arr+i*col+j)=x;
				}
			}
		}
		int get(int i,int j){
			return *(arr+i*col+j);
		}
		~matrix(){
			cout<<"Object destroyed\n";
		}
};
void add_mat(matrix m1,matrix m2){
			for(int i=0;i<m2.row;i++){
				for(int j=0;j<m2.col;j++){
					cout<<m1.get(i,j)+m2.get(i,j)<<" ";
				}
				cout<<endl;
			}
		}
void subt_mat(matrix m1,matrix m2){
			for(int i=0;i<m2.row;i++){
				for(int j=0;j<m2.col;j++){
					cout<<m1.get(i,j)-m2.get(i,j)<<" ";
				}
				cout<<endl;
			}
		}
void mult_mat(matrix m1,matrix m2){
	
}
int main(){
	matrix m1(3,3),m2(3,3);
	m1.fill_mat();
	cout<<endl;
	m2.fill_mat();
	cout<<endl;
	add_mat(m1,m2);
	cout<<endl;
	subt_mat(m1,m2);
	return 0;
}
