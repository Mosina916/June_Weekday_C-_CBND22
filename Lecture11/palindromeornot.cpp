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

int main(){
	// char arr[]="nittin";

	char arr[1000];
	cin.getline(arr,1000);
	
	if(ispalindromeornot(arr)){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"Not palindrome"<<endl;
	}


	return 0;
}