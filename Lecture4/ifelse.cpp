#include <iostream>
using namespace std;
int main(){
	int a=1,b=0,c=20,d=-1;
	if(a++ and b-- and ++d){//a-->2 b-->-1
		cout<<"hello "<<endl;
	}
	else if(--c and b++ and ++d){ //c--19
		cout<<"world"<<endl;

	}
	else if(c++ and d-- and --b and --a){
		cout<<"coding blocks"<<endl;

	}
	else{
		cout<<"hi i am a student"<<endl;
	}

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;


	return 0;
}