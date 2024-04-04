#include<iostream>

using namespace std ;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    
    for(int j = low; j<high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
	i++;
    
    
    int temp = arr[i];
    arr[i] = pivot ;
    arr[high] = temp;

    return i;
}

void quickSort(int arr[],int low,int high){
    if(low < high)
    {
        int pivot_index = partition(arr,low,high);

        quickSort(arr, low, pivot_index - 1);
        quickSort(arr, pivot_index + 1, high);
    }
}

int main()
{
    int arr[] = {2,8,6,4,9,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Sorted :";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr,0,n-1);
    
    cout << "\n\nAfter Sorted :";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    
    return 0;

}