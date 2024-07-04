#include<iostream>
bool isPrime(int a){
	for(int i=1; i<=a;i++){
		if(a%i==0)
		{
			return false;
		}
	} return true;
}
int main()
{
	int i,n;
	std::cin>>n;
	for(i=1;i<=n;i++){
		if(isPrime(i)){
			std::cout<<i<<"\n";
		}
	}
	return 0;
}
