#include<iostream>

#ifndef __STACK__
#define __STACK__

using namespace std;
template <typename T >
class Stack{

	private: 
		int top;
		int size;
		T* stack;

		bool isFull(){
			if(top==size)
				return 1;
			return 0;
		}
	public:
		Stack(int size){
			this->size=size;
			this->top=0;
			stack = new T[size];
		}
		bool isEmpty(){
			if(top==0)
				return 1;
			return 0;
		}

		void push(int data){
			if(isFull()){
				cout<<"Stack is Full"<<endl;
				return;
			}else{
				stack[top]=data;
				top++;
			}
		}
		T pop(){
			int data;
			if(isEmpty()){
				cout<<"Stack is Empty"<<endl;
			}else{
				top--;
					data=stack[top];
			}
			return data;
		}

};

#endif
