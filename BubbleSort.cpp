#include<iostream>

using namespace std;

int main()
{
	int arr[6] = {45, 35, 40, 10, 15, 25};
	int elements = 6;
	
	cout << "Before sorting array :";
	for(int i = 0; i < elements; i++)
	{
		cout << arr[i] << " ";
	}
	
	for(int i = 0; i < elements-1 ; i++){
		
		for(int i = 0; i < elements-1 ; i++ ){
		
			if(arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp ;
			}
		
		}
		
			cout << "\n\nAfter Pass " << i+1 <<":" ;;
			for(int i = 0; i < elements; i++)
			{
				cout <<"\t"<< arr[i] << " ";
			}
	
	}
		
	return 0;
}