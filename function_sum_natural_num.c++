#include<iostream>
using namespace std;
int sumNUM(int i , int n){
	int sum=0;	
for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
}
int main()
{
	int i , n , sum=0;
	cout<<"enter the range of natural number :";
	cin>>n;
	
	cout<<sumNUM(i , n)<<endl;
	return 0;
}
