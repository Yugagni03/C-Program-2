#include<iostream>
using namespace std;

int check(int num){
	if(num>0){
		cout<<"POSITIVE";
	}
	else{
		cout<<"NEGATIVE";
	}
}
int main()
{
	int a;
	cout<<"enter the num :";
	cin>>a;
	
	cout<<check(a);
	return 0;
}
