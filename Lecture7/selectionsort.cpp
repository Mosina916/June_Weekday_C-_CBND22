#include<iostream>
using namespace std;
int main(){
	int arr[1000];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}


	// int arr[]={2,3,5,1,0};
	// int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int place=0;place<=n-2;place++){
		int min=place;
	for(int j=place+1;j<=n-1;j++){
		if(arr[j]<arr[min]){
			min=j;
		}

	}
	swap(arr[place],arr[min]);


	}

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	



	


	return 0;
}