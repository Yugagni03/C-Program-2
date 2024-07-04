#include<iostream>
using namespace std;
int main()
{
	int i , n , fact=1;
	cout<<"enter the num :";
	cin>>n;
	for(i=1 ; i<=n ; i++){
		fact=fact*i;
	}
	cout<<"the factorial of the num is : "<<fact;
	return 0;
}
