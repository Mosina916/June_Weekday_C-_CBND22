#include <iostream>
using namespace std;
// void fertocel(){
// 	int intifer,finalfer,step;
// 	cin>>intifer>>finalfer>>step;//0 300 20


// 	int F=intifer;//0


// // loop
// 	while(F<=finalfer){
// 		// int C=(5/9)*(F-32);

// 	// int C=(5.0/9)*(F-32);
// 		// int C=(5/9.0)*(F-32);

// 		int C=(5.0/9.0)*(F-32);

// 	cout<<F<<"       "<<C<<endl;
// 	F=F+step;//300


// 	}




// }


void fertocel(int intifer,int finalfer,int step){
	int F=intifer;//0


// loop
	while(F<=finalfer){
		// int C=(5/9)*(F-32);

	// int C=(5.0/9)*(F-32);
		// int C=(5/9.0)*(F-32);

		int C=(5.0/9.0)*(F-32);

	cout<<F<<"       "<<C<<endl;
	F=F+step;//300


	}

}
int main(){

	// fertocel();
	// fertocel();
	// fertocel();

	int intifer,finalfer,step;
	cin>>intifer>>finalfer>>step;//0 300 20

	fertocel(intifer,finalfer,step);


	

	







	return 0;

}