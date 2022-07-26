#include<iostream>
using namespace std;
// void isprime(){
// 	int n;
// 	cin>>n;//1
// 	int i=2;

// 	// loop
// 	while(i<=n-1){//2<=8
// 		if(n%i==0){
// 			cout<<"not prime"<<endl;
// 			break;

// 	}
	
// 	i++;//5

// 	}
// 	if(i==n){
// 		cout<<"Prime"<<endl;
// 	}
// }


void isprime(int n){

	int i=2;

	// loop
	while(i<=n-1){//2<=8
		if(n%i==0){
			cout<<"not prime"<<endl;
			break;

	}
	
	i++;//5

	}
	if(i==n){
		cout<<"Prime"<<endl;
	}
	
}

int main(){
	int n;
	cin>>n;
	// isprime();
	isprime(n);
	


	return 0;
}