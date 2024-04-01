#include<iostream>

using namespace std;

void insertion(int arr[], int elements)
{
    int i, j, temp;

    for(i = 1 ; i <= elements; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && temp <= arr[j])
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp ;
    }
}

int main()
{
    int arr[20];
    int elements;

    cout << "Enter no of Elements :" ;
    cin >> elements ;

    cout << "Enter Unsorted Array :";
    for(int i=0 ; i<elements ; i++)
    {
        cin >> arr[i];
    }

    insertion(arr,elements);

    cout << "Sorted Array :" ;
    for(int i=0 ; i<elements ; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
