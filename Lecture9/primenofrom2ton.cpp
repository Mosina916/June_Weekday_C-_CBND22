#include<iostream>
using namespace std;


int main(){
	int N;
	cin>>N;

	for(int n=2;n<=N;n++){

	
	int i=2;

	// loop
	while(i<=n-1){//2<=8
		if(n%i==0){
			// cout<<"not prime"<<endl;
			break;

	}
	
	i++;//5

	}
	if(i==n){
		// cout<<"Prime"<<endl;

		cout<<n<<" ";
	}


	}


	cout<<endl;




	return 0;
}