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
   int n;
   cin>>n;//4
   char a[1000];
   cin.ignore();
   cin.getline(a,1000);//pen

   char largestarrtillnow[1000];
   copy(a,largestarrtillnow);//pen

   int maxl=lengthofarr(a);//3

// loop
for(int c=1;c<=n-1;c++){
     cin.getline(a,1000);//pencil elephant
   if(lengthofarr(a)>maxl){
       copy(a,largestarrtillnow);
       maxl=lengthofarr(a);
   }


}

cout<<largestarrtillnow<<endl;
cout<<maxl<<endl;
  

   


    return 0;
}
