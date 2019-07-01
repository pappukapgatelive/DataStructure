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
		void Sorting(){
			int data,i=0;
			int size=countingList();
			int* array=new int[size];
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
			sortingLogic(array);
		}

		void sortingLogic(int* array){
			int size=countingList();
			for(int i=0;i<size;i++){

				for(int j=0;j<size;j++){
					if(array[i]<array[j]){

						int temp=array[i];
						array[i]=array[j];
						array[j]=temp;
					}
				}
			}
			for(int i=0;i<size;i++){
				cout<<array[i];	

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
		}
		sl.insertE(data);

	}
	sl.print();
	sl.Sorting();

}
