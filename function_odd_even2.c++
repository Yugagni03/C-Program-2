#include<iostream>
using namespace std;

int oddEven(int num){
	if(num%2==0){
		cout<<"EVEN";
	}
	else{
		cout<<"ODD";
	}
}
int main()
{
	int a;
	cout<<"enter the num :";
	cin>>a;
	
	cout<<oddEven(a);
	return 0;
}
