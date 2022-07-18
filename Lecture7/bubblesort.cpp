#include<iostream>
using namespace std;
int main(){
	// int arr[]={4,5,2,3,1,0,3,5,2,8,7,56,3,45};
	// int n=sizeof(arr)/sizeof(int);

	int arr[1000];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// bubble sort

	for(int i=1;i<=n-1;i++){
		cout<<"value of i's are ";
		cout<<i<<" "<<endl;
		for(int j=0;j<=n-1-i;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}

	}
	}
	


	// optimised bubble sort


	// for(int i=1;i<=n-1;i++){

	// 	// cout<<i<<endl;
	// 	bool kyabhitakswaphuva=false;
	// 	for(int j=0;j<=n-1-i;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 		kyabhitakswaphuva=true;

	// 	}

	// }
	// if(kyabhitakswaphuva==false){
	// 	break;
	// }

	// }
	



			// using 3rd variable
			// int c=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=c;


			// using given variable

			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];


			// inbuilt swap

			// swap(arr[j],arr[j+1]);


			// swap in a line
			// arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);





	// // pehle it
	// for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}

	// }

	// // 2nd it
	// for(int j=0;j<=n-3;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}

	// }

	// 3rd it
	// for(int j=0;j<=n-4;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}

	// }

	// // 4th it
	// for(int j=0;j<=n-5;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}

	// }



	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	return 0;
}