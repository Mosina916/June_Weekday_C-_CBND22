#include <iostream>
using namespace std;
// int sum(int a,int b){
// 	int s=a+b;
// 	return s;
// }
// int sum(int a,int b,int c){
// 	int s=a+b+c;
// 	return s;

// }


// int sum(int a,int b,int c,int d){
// 	int s=a+b+c+d;
// 	return s;

// }

// int sum(int a,int b,int c,int d,int e){
// 	int s=a+b+c+d+e;
// 	return s;

// }

// int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0){
// 	int s=a+b+c+d+e+f+g;
// 	return s;
// }

int mult(int a=1,int b=1,int c=1,int d=1,int e=1){
	int ans=a*b*c*d*e;
	return ans;
}
int main(){
	// cout<<sum(4,3)<<endl;
	// cout<<sum(6,7,2)<<endl;
	// cout<<sum(7,6,7,2)<<endl;
	// cout<<sum(7,6,7,2,1)<<endl;


	cout<<mult(2,3)<<endl;
	cout<<mult(2,3,4)<<endl;
	cout<<mult(2,3,6,7)<<endl;






	return 0;
}