#include <iostream>
using namespace std;
int main(){
	int intifer,finalfer,step;
	cin>>intifer>>finalfer>>step;//0 300 20


	int F=intifer;//0


// loop
	while(F<=finalfer){
		int C=(5/9)*(F-32);

	// int C=(5.0/9)*(F-32);
		// int C=(5/9.0)*(F-32);

		float C=(5.0/9.0)*(F-32);

	cout<<F<<"       "<<C<<endl;
	F=F+step;//300


	}










	return 0;

}