#include<iostream>
using namespace std;
class Stack{
	private:
		int top;
		int *arr;
	public:
		Stack(){
			top=0;
			arr = new int;
		}
		void push(int x){
			*(arr+top)=x;
		}
		int pop(){
			return *(arr+(top--));
		}
		int seek(){
			return *(arr+top);
		}
		int size(){
			return top;
		}
		int isEmpty(){
			return top==0;
		}
};
class Queue{
	int frnt;
	int rear;
	int *arr;
	public:
		Queue(){
			frnt=-1;
			rear=-1;
			arr= new int;
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
class Node{
	public:
	int data;
	Node *next;
};
class L_list{
	private:
		Node *head;
	public:
	L_list(){
		head = NULL;
	}
	void insert_begin(int x){
		if(head == NULL){
			head = new Node;
			head->data= x;
			head->next=NULL;
		}
		else{
			Node *node = new Node;
			node->data= x;
			node->next= head;
			head=node;
		}
	}
	void insert_end(int x){
		Node *node = new Node;
			node->data= x;
			node->next=NULL;
		Node *temp = head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
	void insert_pos(int p,int x){
		Node *node = new Node;
		node->data= x;
		node->next=NULL;
		
		Node *temp = head;
		for(int i=1;i<p-1;i++){
			temp=temp->next;
			
		}
	}
	void delete_begin(){
		Node *node = head;
		head=head->next;
		delete node;
	}
	void delete_end(){
		Node *temp = head,*prev;
		while(temp->next != NULL){
			prev = temp;
			temp=temp->next;
		}
		prev->next = NULL;
		delete temp;
	}
	int search(int x){
		Node *temp = head;
		while(temp->next != NULL){
			if(temp->data == x){
				return 1;
			}
			temp=temp->next;
		}
		return 0;
	}
	void display(){
		Node *temp = head;
		while(temp != NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};

class Set{
	int size;
	int *arr;
	public:
	Set(){
		size = 0;
	}
		void insert(int x){
			*(arr+size)=x;
			size++;
		}
		void Sort(){
			for(int i = 0;i<size;i++){
				for(int j=i+1;j<=size;j++){
					if(*(arr+j) < *(arr+i)){
						int temp = *(arr+j);
						*(arr+j) = *(arr+i);
						*(arr+i)= temp;
					}
				}
			}
		}
		void remove(int x){
			int i = 0;
			while(*(arr+i) != x){
				i++;
			}
			size--;
			for(int j=i;j<size;j++){
				*(arr+j)=*(arr+j+1);
			}
		}
		void display(){
			for(int i = 0;i<size;i++){
					cout<<*(arr+i)<<endl;
			}
		}
};

int main(){
	/*Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout<<s1.pop()<<endl;
	s1.push(4);
	cout<<s1.seek()<<endl;
	
	Queue q1;
	q1.enque(2);
	q1.enque(3);
	q1.enque(4);
	cout<<q1.get_front()<<endl;
	cout<<q1.deque()<<endl;
	cout<<q1.get_front()<<endl;
	
	L_list l1;
	l1.insert_begin(1);
	l1.insert_begin(2);
	l1.insert_begin(3);
	l1.display(); 
	
	Set s1;
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.Sort();
	s1.remove(2);
	s1.display();*/
	
	return 0;
}
