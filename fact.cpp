#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;

	long fact = 1;
	while(num)
		fact *= num--;

	cout<<"Factorial of the number is: "<<fact<<endl;
	return 0;
}
