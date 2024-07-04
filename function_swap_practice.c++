#include<iostream>
using namespace std;
int swap(int *a, int *b){
	int temp;
	*a=temp;
	*a=*b;
	*b=temp;
	
}
int main()
{
	int x=5;
	int y=9;
	swap(&x,&y);
	cout<<x<<" "<<y;
	return 0;
}
