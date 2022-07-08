#include<iostream>
using namespace std;

int main(){
	int x=0,y=0;
	char ch;
	// SSSNEEEW
	// cin>>ch;//'S'
	ch=cin.get();
	// loop
	while(ch!='\n'){
		if(ch=='E'){
		x++; //3, -2
	}
	else if(ch=='W'){
		x--;//2 -2

	}
	else if(ch=='N'){
		y++;//0 -2
	}
	else{
		y--; //
	}
	// cin>>ch;//'\n'
	ch=cin.get();

	}

	// cout<<x<<" "<<y<<endl;

	if(x>=0 and y>=0){
		// i am in ist quadrant
		for(int c=1;c<=x;c++){
			cout<<'E';
		}
		for(int c=1;c<=y;c++){
			cout<<'N';
		}
		cout<<endl;
	}
	else if(x<=0 and y>=0){
		// i am in 2nd quadrant
		for(int c=1;c<=y;c++){
			cout<<'N';

		}

		for(int c=1;c<=abs(x);c++){
			cout<<'W';
			
		}
		cout<<endl;
	}
	else if(x<=0 and y<=0){
		// i am in 3rd quadrant
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
			
		}
		for(int c=1;c<=abs(x);c++){
			cout<<'W';
			
		}
		cout<<endl;


	}
	else{
		// i am in 4th quadrant
		for(int c=1;c<=x;c++){
			cout<<'E';
			
		}
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
			
		}

		cout<<endl;


	}
	

	




	return 0;
}