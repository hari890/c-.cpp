#include<iostream>
using namespace std;
class Array{
	public:
		int *arr;
};
class Stack:public Array{
	public:
	int top;
		Stack(){
			arr = new int;
			top=-1;
		}
		void push(int a){
			*(arr+(++top))=a;
		}
		int pop(){
			return *(arr+(top--));
		}
		int size(){
			return top;
		}
		void display(){
			for(int i=0;i<=top;i++){
				cout<<*(arr+i)<<endl;
			}
		}
};
class Queue:public Array{
	public:
	int frnt;
	int rear;
		Queue(){
			arr = new int;
			frnt = -1;
			rear = -1;
		}
		void enque(int x){
			if(frnt == -1) frnt=0;
			*(arr+(++rear))=x;
		}
		int deque(){
			return *(arr+(frnt++));
		}
		int isEmpty(){
			return frnt == -1 || frnt > rear;
		}
		int size(){
			return rear+1;
		}
		int get_front(){
			return *(arr+frnt);
		}
};
int main(){
	Stack s;
	s.push(1);
	s.push(3);
	s.push(8);
	s.display();
	Queue q;
	q.enque(2);
	q.enque(4);
	q.enque(9);
	q.deque();
	cout<<q.get_front()<<endl;
	return 0;
}
