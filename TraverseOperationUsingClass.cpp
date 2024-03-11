#include<iostream>

using namespace std ;

class Traverse{
	
	int element_num ;
	int arr[10] ;
	
	public :
		
	void setElement(){
		
		int element_num ;
		int arr[10] ;
		
		cout << "Enter Number of Element (less than 10): " ;
		cin >> element_num ;
		
		cout << "Enter Elements :" ;
		for(int i = 0; i < element_num ; i++)
		{
			cin >> arr[i] ;
		}
		
		this->element_num = element_num ;
		for(int i=0 ; i < element_num ; i++)
		{
			this->arr[i] = arr[i] ; 	
		}
		
	}
	
	void getElement(){
		
		for(int i = 0 ; i < this->element_num ; i++){
			cout << this->arr[i] << " " ;
		}
	}
	
};

int main()
{
	Traverse traverse ;
	traverse.setElement();
	traverse.getElement();
	
	return 0;
}