#include<iostream>
int main()
{
	int num;
	std::cout<<"enter a valid number :";
	std::cin>>num;
	
	if(num>10)
	std::cout<<"cum is greater than 10";
	else if(num==10)
	std::cout<<"num is equal to 10";
	else
	std::cout<<"num is less than 10";
	
	return 0;
}
