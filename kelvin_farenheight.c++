#include<iostream>
int main()
{
	int kelvin , farenheight;
	std::cout<<"enter the temperature on kelvin :";
	std::cin>>kelvin;
	
	farenheight= (kelvin - 273.15) * 9/5 + 32;
	std::cout<<"the temperature is : "<<farenheight;
	return 0;
	
}
