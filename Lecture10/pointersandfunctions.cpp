#include<iostream>
using namespace std;
void update(int*y){
	*y=*y+90;

	cout<<*y<<endl;


}
int main(){

	int x=90;
	cout<<x<<endl;//90
	update(&x);
	cout<<x<<endl;//




	

	return 0;
}