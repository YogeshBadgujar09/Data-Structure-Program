#include<iostream>
 
using namespace std ;

void section(int arr[] , int n) 
{
	int i,j,small;

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

	cout << "Before sorting :" ;
	printArr(arr,n);

	section(arr,n);

	cout << "After sorting :" ;
	printArr(arr,n);
		
	return 0;
}