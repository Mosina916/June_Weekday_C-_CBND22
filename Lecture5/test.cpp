#include<iostream>
using namespace std;
// global variable
int a=90;

int main(){
	// local variables
	int a=70;
	float b=40.78;
	int c=30;
	int d=69;

	if(c<=20){
		int d=80;
		// int a=20;
		a=a+30;
		float c=80.54;

		cout<<"value of a is "<<a<<endl;//
		cout<<"value of d is "<<d<<endl;//
		cout<<"value of c is "<<c<<endl;//

	}
	else{
		int z=80;
		a=79;
		float b=29.3;

		cout<<"value of z is "<<z<<endl;//80
		cout<<"value of a is "<<::a<<endl;//79
		::a=::a+68;
		cout<<"value of a is "<<::a<<endl;//158

		cout<<"value of b is "<<b<<endl;//29.3

		cout<<d<<endl;

	}

	cout<<"value of a is "<<a<<endl;//70
	cout<<"value of b is "<<b<<endl;
	cout<<"value of c is "<<c<<endl;
	// cout<<"value of d is "<<d<<endl;
	cout<<"value of a is "<<::a<<endl;//158







	return 0;
}