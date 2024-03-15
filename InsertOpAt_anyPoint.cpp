#include<iostream>

using namespace std ;

int main()
{
	int arr[20] = {10, 20, 30, 40, 50, 60};
	int elements = 6 ;
	int add_element_value = 45 ;
	int point_element_pos = 5 ;

	cout << "before Insert :" ;
	for(int i = 0; i < elements; i++){
		cout << arr[i] << " ";
	}
	
	for(int i = elements-1 ; i >= point_element_pos-1 ; i--){
		arr[i+1] = arr[i];
	}
	
	elements++;
	
	arr[point_element_pos] = add_element_value ;
	
	cout << "\nAfter Insert :" ;
	for(int i = 0; i < elements; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}