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
		Stack<int> stack(size);
		if(head==NULL){
		cout<<"List is Empty"<<endl;
		}else{
			Node* tempNode = head;
			while(tempNode!=NULL){
			stack.push(tempNode->getData());
			tempNode=tempNode->getNext();
			}
			while(1){
				if(!stack.isEmpty()){
			int data=stack.pop();
			cout<<data<<"->";
			}else{
			break;
			}
			}
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
