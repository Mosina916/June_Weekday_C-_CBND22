#include<iostream>
using namespace std;
int main(){
	int arr[1000000];
	int n;
	cin>>n;//5

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}


	int b[1000000];
	for(int k=0;k<=n-1;k++){
		int temp=arr[k];//0
		b[temp]=k;



	}

	for(int i=0;i<=n-1;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	



	return 0;
}