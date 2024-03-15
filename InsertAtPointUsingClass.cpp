#include<iostream>

using namespace std ;

class InsertOpeartion{
	
    int arr[20] = {1, 2, 3, 4, 5, 6, 7};
	int element = 7 ;
	int point_position = 4 ;
	int element_value_add = 10 ;
	
	public :
		
	void beforeInsert(){
		cout << "Before Insert :" ;
		for(int i = 0 ; i < element ; i++){
			cout << arr[i] << " ";
		}
		cout << endl ;
	}
	
	void insertOperation()
	{
		beforeInsert();				//function channing
		
		for(int i = element - 1 ; i >= point_position - 1 ; i-- )
		{
			arr[i+1] = arr[i] ;
		}
		arr[point_position] = element_value_add ;
		
		element += 1;
		
		afterInsert() ;				//function channing
	}
	
	void afterInsert(){
		cout << "After Insert :" ;
		for(int i = 0 ; i < element ; i++){
			cout << arr[i] << " ";
		}
	}
	
};

int main()
{
	InsertOpeartion obj ;
	obj.insertOperation(); 
	
	return 0 ;
}