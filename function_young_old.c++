#include<iostream>
using namespace std;

int year(int age)
{
		if(age<=18 && age<=50)
	{
		cout<<"YPU ARE YOUNG";
	}
	else{
		cout<<"YOU ARE OLD IN AGE";
	}
}
int main()
{
	int age;
	cout<<"enter the age :";
	cin>>age;
    cout<<year(age);	

	return 0;
}
