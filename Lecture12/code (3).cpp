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
void rotatebyn(char arr[100],int n){

    int len=lengthofarr(arr);//12
    int i=lengthofarr(arr);

while(i>=0){
     arr[i+n]=arr[i];
    i--;
    
}
int s=0;
int k=len;
// loop
for(int i=1;i<=n;i++){
    arr[s]=arr[k];
s++;
k++;

}

arr[len]='\0';

cout<<arr<<endl;

   
    
}
int main() {
    int n;
    cin>>n;
   

    cin.ignore();

    char arr[100];

    cin.getline(arr,100);//"codingblcoks"
     n=n%lengthofarr(arr);
   rotatebyn(arr,n);

  

    return 0;
}
