#include<iostream>
using namespace std;
int main(){
	// int a=10;
	// float f=34.43;
	// double d=89.6757;
	// cout<<"value of a is : "<<a<<endl;
	// cout<<"value of f is : "<<f<<endl;
	// cout<<"value of d is : "<<d<<endl;

	// cout<<"sizeof a is : "<<sizeof(a)<<endl;//4
	// cout<<"sizeof f is : "<<sizeof(f)<<endl;//4
	// cout<<"sizeof d is : "<<sizeof(d)<<endl;//8

	// cout<<"value of &a is : "<<&a<<endl;
	// cout<<"value of &f is : "<<&f<<endl;
	// cout<<"value of &d is : "<<&d<<endl;

	// int*aptr=&a;
	// float *fptr=&f;
	// double*dptr=&d;

	// &a is same as aptr


	// cout<<aptr<<endl;
	// cout<<fptr<<endl;
	// cout<<dptr<<endl;


	// cout<<"sizeof a is : "<<sizeof(aptr)<<endl;//4
	// cout<<"sizeof f is : "<<sizeof(fptr)<<endl;//4
	// cout<<"sizeof d is : "<<sizeof(dptr)<<endl;//8


	// char ch='A';
	// cout<<"value of ch is : "<<ch<<endl;//A
	// cout<<"sizeof ch is : "<<sizeof(ch)<<endl;//1
	// cout<<"value of &ch is : "<<&ch<<endl;//oxhfg
	// char*chptr=&ch;

	// cout<<chptr<<endl;
	// cout<<"sizeof chptr is : "<<sizeof(chptr)<<endl;//8

	// char g='h';
	// cout<<&g<<endl;
	// char*gptr=&g;
	// cout<<gptr<<endl;

	// fooling of compiler

	// cout<<(int*)&ch<<endl;
	// cout<<(float*)&ch<<endl;
	// cout<<(double*)&ch<<endl;

	// cout<<(bool*)&ch<<endl;

	// cout<<(void*)&ch<<endl;
	// int a=10,b=40,c=80;
	// int b=40;
	// int c=80;



	// int *aptr,*bptr,*cptr;
	// int *bptr;
	// int *cptr;


	// int a=10;
	// float f=34.43;
	// double d=89.6757;

	// int*aptr=&a;
	// float *fptr=&f;
	// double*dptr=&d;


	// *aptr is same as a


	// cout<<*aptr<<endl;

	// cout<<*fptr<<endl;
	// cout<<*dptr<<endl;




	// cout<<aptr<<endl;
	int a=10;

	int*aptr=&a;
	int**xptr=&aptr;

	cout<<xptr<<endl;
	int***pptr=&xptr;

	cout<<pptr<<endl;


	// derefrence operator-->*

	cout<<*(*(*pptr))<<endl;












	return 0;
}