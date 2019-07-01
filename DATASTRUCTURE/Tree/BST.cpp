#include<iostream>

#include "Stack.cpp"
#include "Queue.cpp"

using namespace std;

class Node{
	private:
		int data;
		Node* right;
		Node* left;
	public:
		Node(){}

		Node(int data){
			this->data=data;
			this->right=NULL;
			this->left=NULL;
		}

		void setData(int data){
			this->data=data;
		}

		void setRight(Node* right){
			this->right=right;
		}

		void setLeft(Node* left){
			this->left=left;
		}

		int getData(){
			return data;
		}

		Node* getRight(){
			return right;
		}

		Node* getLeft(){
			return left;
		}

		void print(){
			cout<<data<<"->";
		}

};
class BST{
	private:
		Node* root;
	public:

		BST(){
			root=NULL;
		}
		void insert(int data){
			Node* newNode = new Node(data);
			if(root==NULL){
				root=newNode;
			}else{
				Node* tempNode=root;
				Node* prevNode=NULL;
				while(tempNode!=NULL){
					prevNode=tempNode;
					if(data>=tempNode->getData()){
						tempNode=tempNode->getRight();
					}else{
						tempNode=tempNode->getLeft();
				}
				}
				if(data>prevNode->getData()){
					prevNode->setRight(newNode);
				}else{
					prevNode->setLeft(newNode);
				}
			}

		}

		void BFS(){
			Queue<Node*> queue(100);
				queue.enqueue(root);
				while(!queue.isEmpty()){
					Node* printNode = queue.denqueue();
					printNode->print();
					if(printNode->getRight()!=NULL){
						queue.enqueue(printNode->getRight());
					}
					if(printNode->getLeft()!=NULL){
						queue.enqueue(printNode->getLeft());
					}
				}
		}
		void DFS(){
			Stack<Node*> stack(100);
				stack.push(root);
				while(!stack.isEmpty()){
					Node* printNode = stack.pop();
					printNode->print();
					if(printNode->getRight()!=NULL){
						stack.push(printNode->getRight());
					}
					if(printNode->getLeft()!=NULL){
						stack.push(printNode->getLeft());
					}
				}
		}
		


};
int main(){
	BST bst;
	int data;
	while(1){
		cin>>data;
		if(data==-1)
			break;

		bst.insert(data);
	}
cout<<"\n-------------------------------Printing Time-----------------------"<<endl;
cout<<"\n-------------------------------BFS---------------------------------"<<endl;
	bst.BFS();
cout<<"\n-------------------------------DFS----------------------------------"<<endl;
	bst.DFS();
	cout<<endl;
}
