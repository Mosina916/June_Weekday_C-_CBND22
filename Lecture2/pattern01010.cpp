#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5


	int rowno=1;
	while(rowno<=n){//4<=5
		if(rowno%2==0){
			// ye even row hai
			int startval=0;
			int couval=1;
			while(couval<=rowno){
				cout<<startval<<" ";

				couval=couval+1;//5
				// if(startval==0){
				// 	startval=1;
				// }
				// else{
				// 	startval=0;
				// }
				startval=1-startval;

			}
			cout<<endl;
			rowno=rowno+1;

		}
		else{
			// odd hai row no
			int startval=1;
			int countval=1;//pehla kaam klar rahi hun
			// loop
			while(countval<=rowno){
				cout<<startval<<" ";
			countval=countval+1;//4
			// if(startval==1){
			// 	startval=0;
			// }
			// else{
			// 	startval=1;
			// }

			startval=1-startval;

			}
			cout<<endl;
			rowno=rowno+1;//4

		}
		



	}


	



	return 0;
}