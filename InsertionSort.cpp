#include<iostream>

using namespace std;

int main(){
	
	int arr[] = {89,45,35,8,12,2};
	int elements = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Before Sort :";
	for(int i = 0; i < elements; i++)
	{
		cout << arr[i] << " ";
	}
	
	for(int i = 1; i < elements; i++){
		
		int temp;
		int j;
		
		temp = arr[i];
		j = j - 1;
		
		while((j >= 0) && (temp<=arr[j]))
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		
		arr[j+1] = temp;
	}
	
	cout << "\nAfter Sort :";
	for(int i = 0; i < elements; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	return 0;
}