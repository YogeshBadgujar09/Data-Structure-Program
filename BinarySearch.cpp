#include<iostream>

using namespace std;

int BinarySearch(int arr[], int item, int low , int high )
{
		while(low <= high)
	{
		int mid = (high - low)	/ 2;
		
		if(arr[mid] == item)
		{
		 	return mid ;
		}
		
		if(arr[mid] < item)
		{
			low = mid + 1;
		 
		}
		else
		{
			high = mid - 1;
		}
			
	}
	
	return -1;	
}

int main()
{
	int arr[] = {10,20,30,40,50};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	int item = 30;
	
	int result = BinarySearch(arr,item,0,len-1);
	
	if(result==-1)
	{
		cout << "Not Found";
	}
	else
	{
		cout << "Element is Found at Index :" << result;
	}
	
	

	
	return 0;
}