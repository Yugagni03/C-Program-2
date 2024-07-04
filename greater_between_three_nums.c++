#include<iostream>
int main()
{
	int num1 , num2 , num3 ;
	std::cout<<"enter the num1 :";
	std::cin>>num1;
	
	std::cout<<"enter the num2 :";
	std::cin>>num2;
	
	std::cout<<"enter the num3 :";
	std::cin>>num3;
	
	if(num1>num2 && num1>num3)
	{
		std::cout<<"num1 is greater than other two nums";
	}
	else if(num2>num1 && num2>num3)
	{
		std::cout<<"num2 is greater in that case";
	}
	else
	{
		std::cout<<"num3 is greater";
	}
	return 0;
}
