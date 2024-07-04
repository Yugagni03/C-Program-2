#include<iostream>
using namespace std;

int max(int num1 , int num2){
	if(num1>num2){
		cout<<"num1 is max";
	}
	else{
		cout<<"num2 is max";
	}
}
int main()
{
	int a,b;
	cout<<"enter the 1st num :";
	cin>>a;
	cout<<"enter the 2nd num :";
	cin>>b;
	
	cout<<max(a,b);
	return 0;
}

