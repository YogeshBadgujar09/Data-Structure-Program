#include<iostream>

using namespace std ;

void traverse(int arr[] , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout << arr[i] << endl ;
	}
}

int main()
{	
	int arr[] = {10, 20, 30, 40,50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	traverse(arr , n);
	
	return 0 ;
}