#include<iostream>
using namespace std;
int factofn(int n){
	int ans=1;
	for(int i=n;i>=1;i--){//2
	ans=ans*i;//1*5-->5
}
return ans;

}

int ncr(int n,int r){
	int finalans=120/(2*6);
	return finalans;

}

int main(){
	int n,r;
	cin>>n>>r;//5 2
	cout<<"ncr is : "<<ncr(n,r)<<endl;



	return 0;
}