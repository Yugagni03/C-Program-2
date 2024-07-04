#include<iostream>
int main()
{
	int kelvin , celcious;
	std::cout<<"enter the temperature on kelvin :";
	std::cin>>kelvin;
	
    celcious = kelvin - 273.15;
	std::cout<<"the temperature is : "<<celcious;
	return 0;
	
}
