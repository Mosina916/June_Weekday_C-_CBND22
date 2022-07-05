#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5


	int rowno=1;


	
// /loop
	int startval=1;
	while(rowno<=n){
		int countstar=1;
		// int startval=1;
		// int printno=1;

	// int countstar=1;//ye batayega ga pehla start print hone jaa raha hai
	// loop
	while(countstar<=rowno){
		// cout<<'*';
		cout<<startval<<" ";
		startval=startval+1;//4

	countstar=countstar+1;//3

	}
	cout<<endl;
	rowno=rowno+1;//2



	}


	



	return 0;
}