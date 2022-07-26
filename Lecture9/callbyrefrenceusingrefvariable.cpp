#include<iostream>
using namespace std;
void update(int &a){
	a=a+45;
	cout<<a<<endl;//135
}

int main(){
	int x=90;
	cout<<x<<endl;//90
	update(x);//call by value
	cout<<x<<endl;//90 

	


	return 0;
}