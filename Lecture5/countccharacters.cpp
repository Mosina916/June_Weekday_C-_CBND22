#include<iostream>
using namespace std;

int main(){
	char ch;
	int c=0;
	// loop
	// cin>>ch;//'h' 'e' 'l' '1' 'O'  '$'
	// ch=cin.get();
	ch=cin.get();
	while(ch!='$'){
		c++;//c=c+1 //=2
		// cin>>ch;//'$'
		ch=cin.get();

	}

	cout<<"count of characters is : "<<c<<endl;
	



	




	return 0;
}