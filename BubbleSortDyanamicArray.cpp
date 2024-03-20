#include<iostream>

using namespace std;

int main()
{
	int arr[20];
	int elements ;
	
	cout << "Enter Size of Arr :";
	cin >> elements ;
	
	arr[elements];
	
	cout << "\nEnter values of elements :" ;
	for(int i = 0; i < elements ; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nBefore Sorting Elemnts :" ;
	for(int i = 0; i < elements ; i++)
	{
		cout << arr[i] << " " ;
	}
	
	for(int j = 0 ; j < elements-1 ; j++)
	{
		for(int i = 0 ; i < elements-1 ; i++)
		{
			if(arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		
		cout << "\nAfter pass :" << j+1 << ":" ;
		for(int i = 0; i < elements ; i++){
			cout << "\t" << arr[i] ;
		}
	}
	
	return 0;
}