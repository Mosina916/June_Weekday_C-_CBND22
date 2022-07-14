#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//4

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	int largest=arr[0];

	for(int j=1;j<=n-1;j++){
		if(arr[j]>largest){
		largest=arr[j];

	}

	}

	cout<<"largest of n elements is "<<largest<<endl;
	


	



	return 0;
}