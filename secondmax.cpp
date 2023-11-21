#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {10,20,30,40,50};
	int largest = 0,second = 0,i;
	if(arr[0]<arr[1])
	{
		largest = arr[1];
		second = arr[0];
	}
	else
	{
		largest = arr[0];
		second = arr[1];
	}
	for(i=2;i<5;i++)
	{
		if(arr[i]>largest)
		{
			second = largest ;
			largest = arr[i];
		}
		else if(arr[i] > second && arr[i] != largest) { 
	
         second = arr[i];
		}
	}
	cout<<"The Second greatest value is"<<second<<endl;
}
