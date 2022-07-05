#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int rowno=1;
	while(rowno<=n){

		// spaces
	int spc=1;//pehli space print kar rahe hai
	while(spc<=n-rowno){//
		cout<<"  ";
	spc=spc+1;//10

	}
	// increseing order mai numbers print karne
	int inccount=1;
	int startval=rowno;
	while(inccount<=rowno){//4<=3
		cout<<startval<<" ";
		startval=startval+1;//6
		inccount=inccount+1;//4
	}
	// startval-->6
	// dec mai print karne hai
	int decco=1;
	int decstart=startval-2;//4
while(decco<=rowno-1){//3<=2
	cout<<decstart<<" ";
	decstart=decstart-1;//2
	decco=decco+1;//3
}
cout<<endl;
rowno=rowno+1;
		

	}




	return 0;
}
