#include<iostream>
int avg(int a , int b, int c){
	int average=(a+b+c)/3;
	return average;
}
int main()
{
	int num1, num2, num3;
	std::cin>>num1;
	std::cin>>num2;
	std::cin>>num3;
	std::cout<<"the result is : "<<avg(num1 , num2 , num3);
	return 0;
	
}
