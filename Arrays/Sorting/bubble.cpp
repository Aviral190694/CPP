#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp;
	cout<<"Enter the array";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
