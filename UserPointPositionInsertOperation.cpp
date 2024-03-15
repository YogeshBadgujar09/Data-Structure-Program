#include<iostream>

using namespace std ;

class InsertOpeartion{
	
    int arr[20] = {1, 2, 3, 4, 5, 6, 7};
	int element = 7 ;
	int point_ele_position ;
	int element_value_add ;
	
	public :
		
	void beforeInsert(){
		cout << "Before Insert :" ;
		for(int i = 0 ; i < element ; i++){
			cout << arr[i] << " ";
		}
		cout << endl ;
	}
	
	void insertOperation(int point_ele_position , int element_value_add)
	{
		beforeInsert();				//function channing
		
		this->point_ele_position = point_ele_position ;
		this->element_value_add = element_value_add ;
		
		for(int i = element ; i >= point_ele_position - 1 ; i-- )     // 6   6>=4    5  5>=4   4  5>=4 
		{
			arr[i+1] = arr[i] ;										 // a[7]=7	   a[6]=6 	a[5] = 5	
		}																				
		arr[point_ele_position - 1] = element_value_add ;					 //	
		
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
	cout << "First point position under 6 :\n" ;	
	obj.insertOperation(4, 10); 
	
	return 0 ;
}