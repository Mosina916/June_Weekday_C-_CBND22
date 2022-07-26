#include<iostream>
using namespace std;
int main(){
	// nickname
	int x=50;
	// datatype &newname=oldname
	int &y=x;
	x=x+60;
	cout<<x<<endl;
	cout<<y<<endl;
	// int &z=x;
	int &z=y;

	z=z+60;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;

	return 0;
}