#include<iostream>

using namespace std;

int main()
{   
    int arr[] = {13,10,2,1,7,0};
    int elements = sizeof(arr)/sizeof(arr[0]);
    int i ;
    int j;
    int temp ;

    cout << "Array Before Sort : ";
    for(int i = 0; i < elements; i++)
    {
        cout << arr[i] << " ";
    }

    for(i = 1; i < elements; i++)
    {
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && temp <= arr[j]) 
        {
                arr[j+1] = arr[j];
                j = j-1;
        }

            arr[j+1] = temp;
    }

    cout << "\nArray after Sort : ";
    for(int i = 0; i < elements; i++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
}