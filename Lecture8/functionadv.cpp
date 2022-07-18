#include <iostream>
using namespace std;
// no arguments and no return
// void sumoftwono(){//function declaretion
// 	// function definition
// 	int a,b;
// 	cin>>a>>b;
// 	int sum=a+b;
// 	cout<<"sum is "<<sum<<endl;

// }
// int multiplicationof2numbers(){
// with return no arguments
float multiplicationof2numbers(){

	int x;
	float y;
	// int y;
	cin>>x>>y;//2 3.3
	// cin>>x>>y;//2 3
	float mul=x*y;
	// int mull=x*y;
	// cout<<mull<<endl;

	return mul;//6.6
}
// dividetwonumbers(int q,int hel,float f,char ch){
//no return with arguments
void dividetwonumbers(int q,int hel){
	int res=q/hel;

	cout<<res<<endl;


}

// return with arguments
float subtraction(int a,float b){
	float ans=a-b;
	return ans;
	// return 0;
}
void sumoftwono();//forward dec
int main(){
	sumoftwono();//function calling/invoking
	// sumoftwono();
	// sumoftwono();

	cout<<multiplicationof2numbers()<<endl;

	// int a,b;
	// cin>>a>>b;

	// dividetwonumbers(a,b);
	dividetwonumbers(8,2);


	cout<<subtraction(6,7.2)<<endl;

	return 0;//terminate 
}


void sumoftwono(){//function declaretion
	// function definition
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	cout<<"sum is "<<sum<<endl;

}