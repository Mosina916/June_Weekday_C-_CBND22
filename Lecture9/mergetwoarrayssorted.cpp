#include<iostream>
using namespace std;
void mergetwosortedarrays(int a[9],int b[5],int m,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;

// loop
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
		a[k]=a[i];
		i--;
		k--;

	}
	else{
		a[k]=b[j];
		j--;
		k--;
	}

	}

// loop
	while(j>=0){
		a[k]=b[j];
	k--;
	j--;


	}
	
	



}
int main(){
	int m=4;
	int n=5;
	int a[9]={2,6,7,9};
	int b[5]={1,3,6,11,12};
	mergetwosortedarrays(a,b,m,n);

	for (int i = 0; i <m+n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;





	return 0;
}