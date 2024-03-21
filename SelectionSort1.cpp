#include<iostream>
 
using namespace std ;

void section(int arr[] , int n) 
{
}

void printArr(int arr[] , int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[] = {80,10,29,11,8,30,15};
	int n = sizeof(arr)/sizeof(arr[0])	;
	int i;
	int j;
	int small;
	
	cout << "Before sorting :" ;
	for(i=0 ; i<n ; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	for(i=0; i<n-1 ;i++)
	{
		small = i;

		for(j=i+1; j<n; j++){
			if(arr[j] < arr[small])
			{
				small = j ;
			}
		}

		int temp = arr[small];
		arr[small] = arr[i];
		arr[i] = temp ;
	}
	
	cout << "\nAfter sorting :" ;
	for(i=0 ; i<n ; i++)
	{
		cout << arr[i] << " ";
	}
	
	 
		
	return 0;
}