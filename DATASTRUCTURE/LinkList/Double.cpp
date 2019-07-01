#include<iostream>

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
			}
		}
		void CountingNode(int search){
			int count=0;
			if(head==NULL)
				cout<<"List is Empty"<<endl;

			Node* tempNode=head;
			while(tempNode->getNext()!=NULL){

				if(tempNode->getData()==search)
					count++;
				tempNode=tempNode->getNext();
			}
			if(tempNode->getData()==search)
				count++;
			cout<<count;
		}

		void Sorting(){
			int data,i=0;
			int* array=new int[5];
			if(head==NULL)
				cout<<"List is Empty"<<endl;
			Node* tempNode=head;
			while(tempNode->getNext()!=NULL){
				data=tempNode->getData();
				array[i]=data;
				i++;
				tempNode=tempNode->getNext();
			}
			data=tempNode->getData();
			array[i]=data;
			i++;
			for(int i=0;i<5;i++){

				for(int j=0;j<5;j++){
					if(array[i]<array[j]){

						int temp=array[i];
						array[i]=array[j];
						array[j]=temp;
					}
				}
			}
			for(int i=0;i<5;i++){
			cout<<array[i];	
				
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
	int data;

	while(1){
		cin>>data;
		if(data==-1){
			break;
		}
		sl.insertE(data);

	}
	sl.print();
	sl.Sorting();

}
