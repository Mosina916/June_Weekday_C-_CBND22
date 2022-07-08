#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//6
	int countsetbits=0;


	for(;n>0;n=n>>1){
		if((n&1)==0){//110&1
		// ld 0 hai
		// n=n>>1;//3

	}
	else{
		// ld 1 hai
		countsetbits=countsetbits+1;//2
		// n=n>>1;//1
	}

	}
	
// /loop
	// while(n>0){
	// 	if((n&1)==0){//110&1
	// 	// ld 0 hai
	// 	n=n>>1;//3

	// }
	// else{
	// 	// ld 1 hai
	// 	countsetbits=countsetbits+1;//2
	// 	n=n>>1;//1
	// }

	// }

	cout<<countsetbits<<endl;
	



	return 0;
}