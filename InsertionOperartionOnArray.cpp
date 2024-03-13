#include<iostream>

using namespace std ;

int insertSort(int arr[] , int numOf_element , int capicity , int insert_value){
	
	if( numOf_element >= capicity)
	 	
		return numOf_element ;	
		arr[numOf_element] = insert_value ; 
		return (numOf_element + 1);
 
}



int main()
{
	int arr[10] = { 10, 20, 30, 40, 50};
	
	int numOf_element  = 5 ;
	
	int capacity = sizeof(arr) / sizeof(arr[0]);
	
	int insert_value = 80 ;
	
	cout << "Array before Insertion :" ;
	for(int i = 0 ; i < numOf_element ; i++){
		cout << arr[i] << " ";
	}
	
	numOf_element =	insertSort( arr, numOf_element, capacity, insert_value);
	
	cout << "\nArray after Insertion :" ;
	for(int i = 0 ; i < numOf_element ; i++){
		cout << arr[i] << " ";
	}	
	
	return 0;
}