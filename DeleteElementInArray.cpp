#include<iostream>

using namespace std;

int findElement(int arr[] , int elements, int del_element_value)
{
		
	for(int i=0 ; i<elements ; i++)
	{
		if(	arr[i] == del_element_value)
		{	
			return i;
		}
		
		return -1;
	}
}

int deleteElement(int arr[], int elements, int del_element_value)
{
	int pos = findElement(arr, elements, del_element_value)	;
	
	if(pos == -1)
	{
		cout << "Element not found" ;
		return elements;
	}
	
	int i;
	
	for(i = pos; i < elements ; i++){
		arr[i] = arr[i+1];
	}
	
	return elements-1;
}

int main()
{	
	int arr[] = {10, 20, 30, 40, 50};
	int elements = sizeof(arr)/sizeof(arr[0]);
	int del_element_value = 10 ;
	
	cout << "Array Before Delete Element :" ;
	for(int i=0 ; i<elements ; i++){
		cout << arr[i] << " " ;
	}
	
	elements = deleteElement(arr, elements , del_element_value);
	
	cout << "\n\nArray After Delete Element :" ;
	for(int i=0 ; i<elements ; i++){
		cout << arr[i] << " " ;
	}
	
	
	return 0;
}