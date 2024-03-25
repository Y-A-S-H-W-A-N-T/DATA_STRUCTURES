#include <bits/stdc++.h>

using namespace std;

class Stack{
	private:
		int size=0;
		int top=-1;
		int *container;
	public:
		Stack(int size){
			this->size = size;
			this->container = new int[this->size];
		}
		
		void add(int num){
			if(this->top==this->size-1){
				cout<<"Stack is FULL"<<endl;
				return;
			}
			else{
				this->top++;
				this->container[this->top] = num;
			}
		}
		int pop_show(){
			if(this->top==-1){
				cout<<"Stack is EMPTY"<<endl;
			}
			else{
				this->top--;
				return container[this->top+1];
			}
		}
		void Display_Stack(){
			if(this->top==-1)
			{
				cout<<"STACK IS EMPTY"<<endl;
				return;
			}
			for(int i=0;i<this->top+1;i++)
			{
				cout<<container[i]<<" ";
			}
		}
		void pop(){
			if(this->top==-1){
				cout<<"Stack is EMPTY"<<endl;
				return;
			}
			else{
				this->top--;
			}
		}
		int pop_index(int ind){
			if(this->top==-1){
				cout<<"Stack is EMPTY"<<endl;
				return;
			}
			else{
				//pop the index and move the elements in the poped place
			}
		}
		int push_index(int num,int ind){}
		void reverse(){}
		int max_value(){}
		int min_value(){}
		void sort_stack(){}
		void pop_n(int n){}
		int push_n(int num[]){}
		void replace(int num,int ind){
			//replace a value at the index with the given number
		}
};
int main()
{
	Stack *obj = new Stack(10);
	obj->add(10);
	obj->add(20);
	obj->add(30);
	obj->add(40);
	obj->add(50);
	obj->pop();
}
