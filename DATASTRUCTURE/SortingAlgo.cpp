#include<iostream>

using namespace std;

template <typename T>
class Sort{
	public:

	//Sorting Logic
	//Selection Sort
	
	T* Selection(T* array,int size){
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(array[i]>array[j]){
					T temp=array[i];
					array[i]=array[j];
					array[j]=temp;
				}
			}
		
		}
	return array;
	}

};
int main(){
	Sort<string> sort;
	int size;
	cin>>size;
	int tempSize=size-1;
	string *array = new string[size];
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	string* sorted = sort.Selection(array,size);
	for(int i=0;i<size;i++){
		//cout<<sorted[i]<<",";
		if(tempSize==i){
			cout<<sorted[i]<<" ";

		}else{
		cout<<sorted[i]<<",";
		}

		
	}

	cout<<endl;
	
	return 0;

}
