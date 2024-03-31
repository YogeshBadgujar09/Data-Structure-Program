#include<iostream>

using namespace std ;

int partition(int arr[], int start, int end){

    int pivot = arr[end];
    int i = (start-1)  ;

    for(int j = start ; j <= end; j++){

        if(arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp ;
        }
    }

    int  temp = arr[i+1];
    arr[i+1] = arr[end];
    arr[end] = temp ;

    return (i+1);
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
    }
}

void quick(int arr[], int start, int end){
    
    if(start < end)
    {
        int p = partition(arr , start , end);

        quick(arr,start,p-1);
        quick(arr,p+1,end);
    }

}


int main()
{
    int arr[] = {23,8,28,13,18,26};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting :";
    print(arr,n);

    quick(arr,0,n-1);

    cout << "\n\nAfter sorting :";
    print(arr,n);

    return 0;
}