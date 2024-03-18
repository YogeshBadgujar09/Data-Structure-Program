#include<iostream>

using namespace std;

class DeleteElement{
	
	int arr[5] = {10, 20, 30, 40, 50};
	int elements = 5;
	int del_element_value = 10 ;
	
	public :
		
	void printBeforeDelete(){
		
		cout << "Array Before Delete Element :" ;
		for(int i=0 ; i<elements ; i++){
			cout << arr[i] << " " ;
		}
		
		deleteElement(arr, elements, del_element_value);		//function channing
	}
	
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
	
 		return elements-1 ;
		
	}
	
		
	void printAfterDelete()
	{
			cout << "\n\nArray After Delete Element :" ;
			for(int i=0 ; i < elements ; i++){
			cout << arr[i] << " " ;
			}
	}
		
};


int main()
{	
	
	DeleteElement deleteElement;
	deleteElement.printBeforeDelete();
	deleteElement.printAfterDelete();	
	//elements = deleteElement(arr, elements , del_element_value);	
	
	return 0;
}