#include<iostream>
int main()
{
	int sec , min , hour;
	int month , year , weekday ;
	int date , time;
	
	std::cout<<"enter seconds :";
	std::cin>>sec;
	std::cout<<"enter minutes :";
	std::cin>>min;
	std::cout<<"enter hour :";
	std::cin>>hour;
	
	std::cout<<"enter month :";
	std::cin>>month;
	std::cout<<"enter year :";
	std::cin>>year;
	std::cout<<"enter weekday :";
	std::cin>>weekday;
	
	std::cout<<"the current date is :"<<weekday<<"/"<<month<<"/"<<year<<"\n";
	std::cout<<"the current time is :"<<hour<<":"<<min<<":"<<sec<<"\n";
	
	return 0;
	
}
