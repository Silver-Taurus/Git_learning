#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number to be checked: ";
	cin>>num;
	for(int i = 2; i < num; i++){
		if(num%i == 0)
			cout<<"Entered Number is not Prime!!!";
		else
			cout<<"Entered Number is Prime!!!";
	}
	return 0;
}
