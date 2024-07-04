#include<iostream>
using namespace std;
int main()
{
	int n , r , rev=0 , rev2=0 ;
	cout<<"enter a num :";
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
		while(n>0){
		rev=n%10;
		n=n/10;
		rev2=rev2*10+r;
	}
	cout<<rev2;
	return 0;
}
