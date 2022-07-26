#include <iostream>
using namespace std;
int lengthofarr(char arr[1000]){
    int i=0;
    int cou=0;

// loop
while(arr[i]!='\0'){
     cou++;
    i++;
}
return cou;
   
}
void copy(char A[1000],char B[1000]){
    int i=0,j=0;

// loop
while(i<=lengthofarr(A)){
    B[j]=A[i];
    i++;
    j++;

}
    

}
void reverse(char arr[100]){
    int i=0;
    int j=lengthofarr(arr)-1;
// loop
while(i<j){
     swap(arr[i],arr[j]);
    i++;
    j--;

}
   

}
int main() {

    char arr[100];
    cin.getline(arr,100);
    reverse(arr);

    cout<<arr<<endl;



   


    return 0;
}
