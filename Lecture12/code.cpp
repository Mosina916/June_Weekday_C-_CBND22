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
int main() {
    char A[1000];
    cin.getline(A,1000);//"Hello"
    char B[1000];
    copy(A,B);

    cout<<A<<endl;
    cout<<B<<endl;


    return 0;
}
