#include<iostream>
#include<conio.h>

const int SIZE=5;

using namespace std;

void q_sort(int arr[], int l, int r)
{
    int pivot = arr[l]; // your pivot is element/data of l
    int left = l;
    int right = r;

    while(l<r)
    {
        while(arr[r] >= pivot && l<r )
        r--;
        
        if(l != r)
        {
            arr[l] = arr[r];
            l++;
        }
        
        while(arr[l] <= pivot && l<r )
        l++;
    
        if(l != r)
        {
            arr[r] = arr[l];
            r--;
         }
    }

    arr[l]=pivot;
    pivot=l; // pivot is not index of pivot element
    
    if(left < pivot)
    q_sort(arr, left, pivot-1);
    if(pivot < right)
    q_sort(arr, pivot+1, right);
}

void quick_sort(int arr[])
{
    q_sort(arr, 0, SIZE-1);
}

int main()
{
    int arr[SIZE],i;
    cout << "Enter five elements\n";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    quick_sort(arr);
    cout<<"After sorting\n";
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl; 
    } 
 
 return 0; 
}