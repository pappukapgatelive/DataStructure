#include<iostream>

#ifndef __STACK__
#define __STACK__

using namespace std;

template <typename T>

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
			this->stack =  new T[size];
		}

		bool isEmpty(){
			if(top==0)
				return 1;
			return 0;
		}

		void push(T data){
			if(isFull()){
				cout<<"Stack is Full"<<endl;
				return;
			}

			stack[top]=data;
			top++;
		}

		T pop(){
			if(isEmpty()){
				T temp;
				cout<<"Stacl is Empty"<<endl;
				return temp;
			}
			top--;
			return stack[top];
		}

};
#endif
