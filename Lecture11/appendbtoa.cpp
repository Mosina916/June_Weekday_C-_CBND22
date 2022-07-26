#include <iostream>
using namespace std;
int lengthofarr(char arr[]){
	int co=0;
	int i=0;

// loop
	while(arr[i]!='\0'){
			co++;//3
	i++;

	}
	return co;




}

bool ispalindromeornot(char arr[]){
	int i=0;
	int j=lengthofarr(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}

	return true;
	

}

void append(char a[],char b[]){
	int i=lengthofarr(a);
	int j=0;
	a[i]=' ';
	i++;
	// loop
	while(j<=lengthofarr(b)){
		a[i]=b[j];
	i++;
	j++;

	}

	

}

int main(){
	char a[]="nitin";
	char b[]="hello";
	cout<<a<<endl;
	cout<<b<<endl;

	append(a,b);

	cout<<a<<endl;
	cout<<b<<endl;

	


	return 0;
}