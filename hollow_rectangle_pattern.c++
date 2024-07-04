#include<iostream>
int main()
{
	int i,j,row,col;
	std::cout<<"enter the rows :";
	std::cin>>row;
	
	std::cout<<"enter the columns :";
	std::cin>>col;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i==1 || i==row || j==1 || j==col){
			std::cout<<"*";
	}
			else
			{
				std::cout<<" ";
			}
		}
			std::cout<<"\n";
	}
	return 0;
}
