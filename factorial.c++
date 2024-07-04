  // C++ Program to Find Factorial
#include<iostream>
int main()
{
	int num, factorial=1;
	std::cout<<"enter the num :";
	std::cin>>num;
	
	for(int i=1;i<=num;i++)
	{
	factorial=factorial*i;
}
	std::cout<<"the factorial is : "<<factorial;
	
	return 0;
}
