#include<iostream>
using namespace std;
int  sumofarr(int b[],int n){//3 4 2 5 1
	int sum=0;
	for(int i=0;i<=n-1;i++){
		sum=b[i]+sum;//15

	}
	return sum;

	


	


}
int main(){
	int arr[]={3,4,2,5,1};

	int n=sizeof(arr)/sizeof(int);//5
	
	cout<<sumofarr(arr,n)<<endl;


	return 0;
}