#include<iostream>

using namespace std ;

class SelectionSort{
	
	int arr[20] ;
	int elements;
	
	public :
		
		void setArray() 
		{
			int arr[20];
			int elements;
	
			cout << "Enter no of Elements :" ;
			cin >> elements ;
	
			arr[elements];
	
			cout << "Enter Unsorted Elements :";
			for(int i = 0; i < elements; i++)
			{
				cin >> arr[i];
			} 
		
		
			for(int i = 0; i<elements; i++)
			{
				this->arr[i]=arr[i];
			}
		
			this->elements = elements;
		}
	
		void getArray()
		{
			cout << "\n\nSorted Array :";
			for(int i = 0; i < this->elements; i++)
			{
				cout << this->arr[i] << " ";
			}
		} 
		
		void sortArray()
		{
			for(int i = 0; i < elements-1 ; i++)
			{
				int compare_Index ;
				compare_Index = i;
				
				cout << "\nAfter Pass No " << i+1 << ":";
				for(int j=i+1 ; j<elements ; j++)
				{
					if(this->arr[compare_Index] > this->arr[j])
					{
						 int temp ;
						 temp = arr[compare_Index] ;
						 arr[compare_Index] = arr[j] ;
						 arr[j] = temp;
						 
						  
						 cout << "\nStep " << j << ":";
						 for(int k = 0; k < this->elements; k++)
						 {
						 	cout << "\t" << arr[k] << " ";
						 }
						 
					}
				}
			}
			
			
		}
		
		
		
		
};

int main()
{
	
	SelectionSort selectionSort ;
	selectionSort.setArray();
	selectionSort.sortArray();
	selectionSort.getArray();
	
	return 0;
}