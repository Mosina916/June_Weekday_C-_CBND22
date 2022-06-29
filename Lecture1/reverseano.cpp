#include<iostream>
using namespace std;
int main(){//start of program

	int no;
	cin>>no;//425 -->524

	int rev=0;

	while(no>0){
		int ld=no%10;//5
		rev=10*rev+ld;//10*0+5-->5*10+2-->52*10+4-->524
		no=no/10;//425/10-->42/10-->4/10-->0

	}
cout<<rev<<endl;
	


	return 0;//end of program
}