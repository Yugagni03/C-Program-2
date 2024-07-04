#include<iostream>
int main()
{
	int angle1 , angle2 , angle3;
	std::cout<<"enter the 1st angle of the triangle :";
	std::cin>>angle1;
	std::cout<<"enter the 2nd angle of the triangle :";
	std::cin>>angle2;
	
	angle3= 180-(angle1+angle2);
	std::cout<<"the 3rd angle is : "<<angle3;
	return 0;
	
}
