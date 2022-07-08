#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//7
	int c=1;

	int no;
	cin>>no;//2
	int ans=no;//2

	c=c+1;//2

// loop
	while(c<=n){
			cin>>no;//6
	ans=ans^no;//7
	c=c+1;//8


	}

	cout<<ans<<endl;


	return 0;
}