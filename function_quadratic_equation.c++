#include<iostream>
#include<math.h>
using namespace std;

int equ(int a , int b , int c)
{
	int r;
	r=(-b+sqrt(b*b-4*a*c)/(2*a));
}
int main()
{
	int a , b , c;
	cout<<"enter the value of a :";
	cin>>a;
	
	cout<<"enter the value of b :";
	cin>>b;
	
	cout<<"enter the value of c :";
	cin>>c;
	
	cout<<"the result is :"<<equ(a , b , c);
	return 0;
	
}
