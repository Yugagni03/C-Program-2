// sum of 1st N natural number using formula [n*(n+1)/2} .
#include<iostream>
using namespace std;
int SumofN(int num)
{
	 int sum=num*(num+1)/2;
}
int main()
{
	int num ;
	std::cout<<"enter the number :";
	std::cin>>num;
	
	cout<<"the sum of N  natural number is :"<<SumofN(num);
	return 0;
}
