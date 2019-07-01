#include<iostream>

#ifndef __QUEUE__
#define __QUEUE__

using namespace std;

template <typename T>

class Queue{
	private:
		int size;
		int lastE;
		int firstE;
		T* queue;
	public:
		Queue(int size){
			this->size=size;
			this->lastE=0;
			this->firstE=0;
			queue = new T[size];
		}
		bool isFull(){
			if(lastE>=size)
				return 1;
			return 0;
		}
		bool isEmpty(){
			if(firstE==lastE)
				return 1;
			return 0;
		}


		void enqueue(T data){
			if(isFull()){
				cout<<"Queue is full"<<endl;
				return;
			}else{
				queue[lastE]=data;
				lastE++;
			}



		}
		T denqueue(){
			T data;
			T temp;
			if(isEmpty()){
				cout<<"Queue is Empty"<<endl;
				return temp;
			}else{
				data=queue[firstE];
				firstE++;
				if(firstE==lastE){
					firstE=lastE=0;
				}
			}
			return data;

		}
};
#endif

