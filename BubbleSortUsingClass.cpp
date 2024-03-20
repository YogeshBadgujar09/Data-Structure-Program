#include<iostream>
using namespace std ;

class BubbleSort{
	
	int arr[30];
	int elements ;
	
	public :
	
	void takeElement()
	{
		cout << "Enter Element Number :" ;
		cin >> this->elements ;
		
		this->arr[this->elements];
		
		cout << "Enter Array Elements::";
		for(int i = 0 ; i < elements ; i++)
		{
			cin >> this->arr[i] ;
		}
			
		printArray();
		bubbleSort(this->elements , this->arr);
		printArray();
	}
	
	void bubbleSort(int elements , int arr[])
	{
		for(int i = 0; i < elements-1; i++)
		{
			for(int j = 0; j < elements-1 ; j++)
			{
				if(arr[j] > arr[j+1])
				{
					int temp ;
					
					temp = this->arr[j];
					this->arr[j] = this->arr[j+1];
					this->arr[j+1] = temp;
				}
			}
		}
				
	}
	
	
	void printArray()
	{
		cout << "\nUnsorted Array Elements :";
		for(int i = 0; i < this->elements; i++)
		{
			cout << this->arr[i] << " ";
		}
	}
};

int main()
{
	BubbleSort bubbleSort;
	bubbleSort.takeElement();
	
	return 0;
}