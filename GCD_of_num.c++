#include<iostream>
using namespace std;
int main()
{
    int m , n;
    cout<<"enter m :";
    cin>>m;
    cout<<"enter n :";
    cin>>n;
    while(m!=n){
    if(m>n){
    m=m-n;
}
else if(n>m){
n=n-m;
}
}  cout<<m;
	return 0;
}
