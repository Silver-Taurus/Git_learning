#include<iostream>
using namespace std;

int fib(int n){
	if(n<2)
		return n;
	return fib(n-1)+fib(n-2);
}

int main(){
	int num;
	cout<<"Enter the term: ";
	cin>>num;
	cout<<"The fibonacci value is: "<<fib(num)<<endl;
	return 0;
}

