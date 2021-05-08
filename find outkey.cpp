#include<iostream>
using namespace std;
int main(){
	int n,key;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];	
}
cout<<"number to f/o = ";
cin>>key;
for(int j=0;j<n;j++){
	if(arr[j]==key){
		cout<<"number is present at "<<j+1<<" position in given numbers"<<endl;
		break;	}
		
		if(j==n){
			cout<<"number is not prsent in given numbers"<<endl;
		}
	}
	return 0;
}
