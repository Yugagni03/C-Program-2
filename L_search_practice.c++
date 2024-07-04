#include<iostream>
using namespace std;
int linearsearch(int arr[], int n , int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
		
			return -1;
		}
	
}
int main()
{
	int n, key, arr[n];
	cout<<"enter the number of element:";
	cin>>n;
	cout<<"enter the key:";
	cin>>key;
	cout<<"enter the elements :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<linearsearch(arr,n,key);
	return 0;
}
