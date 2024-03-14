#include<iostream>
 
using namespace std ;
 
 class InsertOperation{
 	
 	int arr[20] = {10, 20, 30, 40, 50};
 	int element_no = 5 ;
 	int capacity = sizeof(arr) / sizeof(arr[0]);
 
 	
 	public :
 		
 	void beforeInsert()
 	{	
 		cout << "\n\nNo of Element :" << this->element_no ;
 		cout << "\nBefore Insert Operation :" ;
		for(int i=0 ; i < this->element_no ; i++){
			cout << arr[i] << " ";
		}
	}
 	
 	int insertOperation(int add_element){
 		
 		beforeInsert();					//function channing
 		
 		if(this->element_no >= capacity)
 		{
			return this->element_no;
		}
 		
		arr[this->element_no] = add_element ;
 		return this->element_no++;
	}
 	
 	void display()
 	{
 		cout << "\n No of Element  :" << this->element_no;
 		cout << "\nAfter Insert Operation :" ;
		for(int i=0 ; i < this->element_no ; i++){
			cout << arr[i] << " ";
		}
 	}
 	
 };
 
 int main()
 {
 	InsertOperation insertoperation ;
 	insertoperation.insertOperation(34);
 	insertoperation.display();
 	insertoperation.insertOperation(43);
 	insertoperation.display();
 
 	return 0;
 }