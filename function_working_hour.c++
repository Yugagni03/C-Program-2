#include<iostream>
using namespace std;

int time(int hour){
	if(hour>=7 && hour<=18)
	{
		cout<<hour <<" is an working hour";
	}
	else{
		cout<<hour<<" is not an working hour , it's rest time";
	}
}
int main()
{
	int h;
	cout<<"enter the hour :";
	cin >>h;
	cout<<time(h);
	return 0;
	
}
