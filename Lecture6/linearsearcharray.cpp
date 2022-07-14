#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//5

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	int key;
	cin>>key;//19
	int k;
	for(k=0;k<=n-1;k++){
			if(arr[k]==key){
				cout<<"key is present at index "<<k<<endl;
				// return 0;
				break;
	}


	}
	if(k==n){
		cout<<"key is not present"<<endl;
	}




	




	return 0;
}