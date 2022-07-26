#include<iostream>
using namespace std;
int main(){
	int r=2;
	// int*rptr=&r;

	int *rptr=NULL;


	// cout<<2*3.14*r<<endl;

	cout<<2*3.14*(*rptr)<<endl;







	return 0;
}