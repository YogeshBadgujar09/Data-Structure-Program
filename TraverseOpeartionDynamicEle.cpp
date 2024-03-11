#include<iostream>

using namespace std ;

void setElement(int arr[] , int n){
	
	cout << "Enter Elements :" ;
	for(int i = 0; i < n; i++)
	{
		cin >> arr [i] ;
	}
}

void getElement(int arr[] ,int n)
{
	cout << "Inserted Elements are :";
	for(int i = 0; i < n; i++)
	{
		cout << arr [i] << " ";
	}

}

int main()
{	
	int n ;
		
	cout << "Enter number of element :";
	cin >> n ;
	
	int arr[n];
	
	setElement(arr , n);
	getElement(arr ,n);
	
	return 0;
}