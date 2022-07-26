#include<iostream>
using namespace std;
void updatearr(int b[],int n){
	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;

	}

	for(int i=0;i<=n-1;i++){
		cout<<b[i]<<" ";

	}
	cout<<endl;//13 14 12 15 11



	


}
int main(){
	int arr[]={3,4,2,5,1};

	int n=sizeof(arr)/sizeof(int);//5
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;//3 4 2 5 1 
	updatearr(arr,n);

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;//


	return 0;
}