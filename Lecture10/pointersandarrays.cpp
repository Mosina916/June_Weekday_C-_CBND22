#include<iostream>
using namespace std;
// update(int b[],int n){
void update(int *b,int n){
	for (int i = 0; i <n; ++i)
	{
		// b[i]=b[i]+10;
		*(b+i)=*(b+i)+10;

	}

	for (int i = 0; i <n; ++i)
	{
		// cout<<b[i]<<endl;

		cout<<*(b+i)<<endl;
	}
}

int main(){

	// int arr[]={3,4,5,6,1};

		int arr[10];
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		{
			// cin>>arr[i];

			cin>>*(arr+i);
		}


	// int n=sizeof(arr)/sizeof(int);
	update(arr,n);
	for (int i = 0; i <n; ++i)
	{
		// cout<<arr[i]<<endl;
		cout<<*(arr+i)<<endl;
	}

	// cout<<endl;


	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" "<<*(arr+i)<<endl;
	// }

	// cout<<endl;

	// cout<<&arr[0]<<endl;
	// cout<<arr<<endl;
	

	

	return 0;
}