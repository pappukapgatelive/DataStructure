#include<iostream>

using namespace std;

class Graph{
	private: 
		int vertex;
		int** matrix;
	public:
		Graph(int vertex){
		this->vertex=vertex;
		matrix = new int*[vertex];
		for(int i=0;i<vertex;i++){
			matrix[i] = new int[vertex];
		for(int j=0;j<vertex;j++){
		matrix[i][j]= -1;
		}
		}
		}

		void addElement(int data,int position1,int position2){
		
			matrix[position1][position2]=data;

			matrix[position2][position1]=data;
		}

		void print(){
		for(int i=0;i<vertex;i++){
			for(int j=0;j<vertex;j++){
			cout<<matrix[i][j];	
			
			}
			cout<<endl;
		}
		}

};

int main(){
Graph g(4);
//g.addElement(10,0,1);
//g.addElement(20,1,2);
//g.addElement(30,2,3);
//g.addElement(40,3,0);
g.print();
}
