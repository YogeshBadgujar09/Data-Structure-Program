#include<iostream>

using namespace std ;

void merge(int[],int,int,int);

void merge_Sort(int arr[], int low, int high)
{
        int mid;

        if(low < high)
        {
            mid = (low+high)/2;
            merge_Sort(arr,low,high);
            merge_Sort(arr,mid+1,high);
            merge(arr,low,high,mid);
        }
}

void merge(int arr[],int low, int high,int mid)
{
    int i,j,k,c[50];

    i=low ;
    k=mid;
    j=mid+1;

    while(i<=mid && j<=high)
    {
            if(arr[i]<arr[j])
            {
                c[k]=arr[i];
                k++;
                i++;
            }
            else
            {
                c[k]=arr[j];
                k++;
                j++;
            }
    }

    while(i <= mid)
    {
        c[k]=arr[i];
        k++;
        i++;
    }
    while(j <= high)
    {
        c[k]=arr[j];
        k++;
        j++;
    }

    for(i=low ; i<k ; i++)
    {
            arr[i]=c[i];
    }

}

int main()
{
    int arr[20];
    int num;

    cout << "enter number of element :";
    cin >> num ;

    cout << "Enter Elements :";
    for(int i=0; i<num ; i++)
    {
        cin >> arr[i] ;
    }

    merge_Sort(arr,0,num-1);

    cout << "sorted Array :";
    for(int i=0; i<num ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}