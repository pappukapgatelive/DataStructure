#include<iostream>
#include "Stack.cpp"

using namespace std;

class Node{
	private:
		int data;
		Node* next;
	public:
		Node(){}

		Node(int data){
			this->data=data;
			this->next=NULL;
		}

		void setData(int data){
			this->data=data;
		}
		void setNext(Node* next){
			this->next=next;
		}
		int getData(){
			return data;
		}
		Node* getNext(){
			return next;
		}
		void print(){
			cout<<data<<"->";
		}

};
class SingleLL{
	private:
		Node* head;
	public:
		SingleLL(){
			this->head=NULL;
		}


		void insertB(int data){
			Node* newNode = new Node(data);
			if(head==NULL){
				head=newNode;
			}else{
				Node* tempNode=head;
				newNode->setNext(tempNode);
				head=newNode;
			}
		}


		int countingList(){
			int count=0;
			Node* tempNode=head;

			while(tempNode->getNext()!=NULL){

				count++;
				tempNode=tempNode->getNext();
			}
			count++;
			return count;
		}

		void reverseData(){
			int size=countingList();
			int i=0,flag=0,data;
			int* array = new int[size];
			if(head==NULL){
				cout<<"List is Empty"<<endl;
			}else{
				Node* tempNode = head;
				while(tempNode!=NULL){
					data=tempNode->getData();
					array[i]=data;
					i++;
					tempNode=tempNode->getNext();
				}
				for(int i=0;i<size;i++){
				cout<<array[i]<<endl;
				}

				for(int i=0;i<=size/2 && size!=0;i++){
				
				if(array[i]!=array[(size-i)-1]){
				flag=1;
				break;
				}
				}
				if(flag==1){
				
				cout<<"Not Palindrom"<<endl;
				}else{
				
				cout<<"Palindrom"<<endl;
				}



		/*		int rSize=size;
				int j=rSize;
				while(1){
					num1=array[k];
					k++;
					num2=array[j];
					j--;			
					if(num1==num2){
						
						cout<<"Palindrom"<<endl;
						break;
					}else{
						cout<<"Not Palindrom"<<endl;
						break;		
					
					}
				}*/
			}
		}


void print(){
	Node* temp = head;
	while(temp!=NULL){
		temp->print();
		temp=temp->getNext();
	}
	cout<<"NULL"<<endl;
}

};

int main(){
	SingleLL sl;
	int data;
	while(1){
		cin>>data;
		if(data==-1){
			break;
		}else{
			sl.insertB(data);
		}
	}
	sl.print();
	cout<<"--------------"<<endl;
	sl.reverseData();
}
