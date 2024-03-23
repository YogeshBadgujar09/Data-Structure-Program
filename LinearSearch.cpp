#include<iostream>

using namespace std;

int main()
{
	
	int arr[] = {10,20,30,40,50};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	int item = 30;
	
	for(int i=0 ; i<len ; i++)	
	{
		if(arr[i]==item)
		{
			cout << item << " is Found at index :" << i;
		}
	}
	
	return 0;
}