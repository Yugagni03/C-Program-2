#include<iostream>
int main()
{
	int num;
	std::cout<<"enter the num you want to check :";
	std::cin>>num;
	
	if(num%2==0)
	{
		std::cout<<"even";
	}
	else
	{
		std::cout<<"odd";
	}
	return 0;
}
