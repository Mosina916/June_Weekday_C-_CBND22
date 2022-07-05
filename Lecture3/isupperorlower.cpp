#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//'B'
	if(ch>='A' and ch<='Z'){
		cout<<"UPPERCASe"<<endl;
	}
	else if(ch>='a' and ch<='z'){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;
	}





	return 0;

}