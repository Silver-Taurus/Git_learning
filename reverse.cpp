#include<iostream>
using namespace std;

int main(){
	int num, rev = 0;
	cout<<"Enter the  number: ";
	cin>>num;
	
	int temp = num;
	while(temp){
		rev = rev*10 + temp%10;
		temp /= 10;
	}

	cout<<"Reversed number is: "<<rev<<endl;
	
	return 0;
}
