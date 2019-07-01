#include<iostream>

using namespace std;

class Node{
	private:
		int data;
		Node* next;
		Node* prev;
	public:
		Node(){}

		Node(int data){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}

		void setData(int data){
			this->data=data;
		}
		void setNext(Node* next){
			this->next=next;
		}
		void setPrev(Node* prev){
		this->prev=prev;
		}
		int getData(){
			return data;
		}
		Node* getNext(){
			return next;
		}
		Node* getPrev(){
		return prev;
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

		void insertE(int data){
			Node* newNode = new Node(data);
			if(head==NULL){
				head=newNode;
			}else{
				Node* tempNode=head;
				while(tempNode->getNext()!=NULL){
					tempNode=tempNode->getNext();
				}
				tempNode->setNext(newNode);
				newNode->setPrev(tempNode);
			}
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

		void insertBF(int serach,int data){
			Node* newNode = new Node(data);
			if(head==NULL){
				cout<<"List is Empty"<<endl;
			}else{
				Node* tempNode=head;
				Node* prevNode;
				while(tempNode->getData()!=serach){
					prevNode=tempNode;
					tempNode=tempNode->getNext();
				}
				newNode->setNext(tempNode);
				prevNode->setNext(newNode);
			}
		}

		void insertAf(int serach,int data){

			Node* newNode = new Node(data);
			if(head==NULL){
				cout<<"List is Empty"<<endl;
			}else{
				Node* tempNode=head;
				Node* prevNode;
				while(tempNode->getData()!=serach){
					prevNode=tempNode->getNext()->getNext();
					tempNode=tempNode->getNext();
				}	
				newNode->setNext(prevNode);
				tempNode->setNext(newNode);
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
void list(){

cout<<"E for INSERT AT END"<<endl;
cout<<"B for INSERT AT BEGIN"<<endl;
cout<<"F for INSERT AT BEFORE"<<endl;
cout<<"A for INSERT AT AFTER"<<endl;
cout<<"P for INSERT AT PRINT"<<endl;
cout<<"e EXIT"<<endl;
}

		int main(){
			SingleLL sl;
			list();
			char cmd;
			
			while(1){
				
			cin>>cmd;
				if(cmd== 'e')
					break;
				if(cmd == 'E'){
					int data;
					cin>>data;
					sl.insertE(data);		
				}

				if(cmd == 'B'){
					int data;
					cin>>data;
					sl.insertB(data);		
				}

				if(cmd == 'F'){
					int data,search;
					cin>>data>>search;
					sl.insertBF(search,data);		
				}

				if(cmd == 'A'){

					int data,search;
					cin>>data>>search;

					sl.insertAf(search,data);		
				}
				if(cmd == 'P'){
					sl.print();		
				}
		}

		}
