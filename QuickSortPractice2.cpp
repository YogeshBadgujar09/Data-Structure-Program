#include<iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	
	for(int j = low; j < high; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	i++;
	int  temp = arr[i];
	arr[i] = arr[high] ;
	arr[high] = temp ;
	
	return i;
}

void quick(int arr[], int low, int high)
{
	if(low < high)
	{
		int pivot_index = partition(arr,low,high);
		
		quick(arr, low, pivot_index - 1);
		quick(arr, pivot_index + 1, high);
	}
}

int main()
{
	int arr[] = {8,2,6,4,9,7};
	int  n = 6;
	
	quick(arr,0,n-1) ;
	
	cout << "After Sort :";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	
	return 0;
}