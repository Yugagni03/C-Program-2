#include<iostream>
int main()
{
	int num;
	std::cout<<"enter the num :";
	std::cin>>num;
	
	if(num%2==0 && num%3==0)
	std::cout<<"it is divisible by both 2 and 3";
	else
	std::cout<<"it is not divisible by 2 and 3";
	
	return 0;
}
