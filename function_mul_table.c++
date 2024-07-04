#include<iostream>
using namespace std;
int mul(int n , int i){

		for(i=1 ; i<=10 ; i++){
	
		cout<<n <<'*' <<i <<'=' << i*n;	
		cout<<"\n";
			}
}
int main()
{
	int i , n;
	cout<<"enter the number :";
	cin>>n;	
	mul(i,n);
	return 0;
}
