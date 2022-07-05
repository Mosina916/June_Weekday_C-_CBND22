#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//7

	// first row
	int countst=1;
	while(countst<=n){
		cout<<'*';
		countst=countst+1;
	}

	cout<<endl;


	int rowno=2;
	while(rowno<=(n+1)/2){
		// stars
	int cstar=1;
	while(cstar<=(n+3)/2-rowno){
		cout<<"*";
		cstar=cstar+1;
	}
	// spaces
	int cspaces=1;
	while(cspaces<=2*rowno-3){
		cout<<" ";
		cspaces=cspaces+1;

	}
	// stars
	cstar=1;
	while(cstar<=(n+3)/2-rowno){
		cout<<"*";
		cstar=cstar+1;
	}

	cout<<endl;
	rowno=rowno+1;

	}

	// rowno-->5


	while(rowno<=n-1){
		// csstars

	int cst=1;
	while(cst<=rowno-((n-1)/2)){
		cout<<"*";
		cst=cst+1;
	}


	// spaces
	int sp=1;
	// while(sp<=(2*(n-rowno-1))+1){
	// 	cout<<" ";
	// 	sp=sp+1;

	// }
	while(sp<=(n-2)-(2*(rowno-((n+1)/2)))){
			cout<<" ";
		sp=sp+1;


	}

	// stars


	cst=1;
	while(cst<=rowno-((n-1)/2)){
		cout<<"*";
		cst=cst+1;
	}

	cout<<endl;
	rowno=rowno+1;//7


	}

	// rowno-->7


	// last row
	countst=1;
	while(countst<=n){
		cout<<'*';
		countst=countst+1;
	}

	cout<<endl;

	


	









	return 0;
}
