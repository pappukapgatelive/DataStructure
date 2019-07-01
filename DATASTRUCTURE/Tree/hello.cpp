#include<iostream>

using namespace std; 

int main(){
	string alpha;
	char search;
	int count=0;
	char data;
	getline(cin, alpha,'\n');
	int size= alpha.length();
	cin>>search;
	for(int i=0;i<size;i++){
		data=alpha[i];
		if(search==data){
			count++;
		}
	}
	cout<<count;
}
