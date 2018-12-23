#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	
	cout<<((num%2)?"Entered number is odd":"Entered number is even");
	cout<<endl;

	return 0;
}
