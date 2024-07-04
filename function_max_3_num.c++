#include<iostream>
using namespace std;

int num(int num1, int num2 , int num3)
{
	if(num1>num2 && num1>num3){
		cout<<"num1 is max";
	}
	else if(num2>num1 && num2>num3){
		cout<<"num2 is max";
	}
	else{
		cout<<"num3 is max";
	}
}
int main()
{
	int a , b , c;
	cout<<"enter the nums :";
	cin>>a>>b>>c;
	cout<<num(a,b,c);
	return 0;
}
