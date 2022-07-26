#include<iostream>
using namespace std;
int factofn(int n){
	int ans=1;
	for(int i=n;i>=1;i--){//2
	ans=ans*i;//1*5-->5
}
return ans;

}

int main(){
	int n;
	cin>>n;//5
	cout<<"fact of a number is : "<<factofn(n)<<endl;



	return 0;
}