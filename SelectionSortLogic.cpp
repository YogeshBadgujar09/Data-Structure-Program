#include<iostream>

using namespace std ;

int main()
{
    int arr[] = {50,80,10,20,40};
    int elements = sizeof(arr)/sizeof(arr[0]);
    int i;
    int j;
    cout << "Before Selection Sort :";
    for( i = 0; i < elements; i++)
    {
        cout << arr[i] << " ";
    }

    for( i = 0; i<elements-1; i++)
    {
      int small ;
      small = i;
      
       cout << "\n\nAfter Pass " << i+1 << ":";

      for(j=i+1 ; j< elements ;j++)
      {
          if(arr[small] > arr[j])
          {
            int temp = arr[small];
            arr[small] = arr[j];
            arr[j] = temp;
          }

          cout << "\n\tStep " <<  i+1 << ": ";
          for(int k=0 ; k<elements ; k++)
          {
            cout << arr[k] << " ";
          }
    }

    }

}