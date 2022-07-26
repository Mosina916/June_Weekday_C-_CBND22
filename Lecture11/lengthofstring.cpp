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

// lengthofarr(char *arr)

int main(){
	// char arr[]="hello";
	char arr[100];
	cin.getline(arr,100);
	cout<<lengthofarr(arr)<<endl;


	return 0;
}