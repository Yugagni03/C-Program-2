#include<iostream>
using namespace std;
int distance(int a , int b , int c){

int distance;
	if(distance==0){
		cout<<"REAL AND EQUAL ";
	}
	else if(distance>0){
		cout<<"REAL AND UNIQUE";
	}
	else if(distance<0){
		cout<<"IMAGINARY";
	}
	else{
		cout<<"invalid data";
	}
}
int main()
{
	int a , b , c , dis ;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	cout<<"enter c :";
	cin>>c;
	dis=((b*b)-(a*c));
	cout<<distance(a,b,c)<<dis;

	return 0;
}
