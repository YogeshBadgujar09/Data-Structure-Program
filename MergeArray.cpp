#include<iostream>

using namespace std ;

int main()
{   
    int m = 5;
    int n = 3;

    int arr1[m] = {1,2,3,4,5};
    int arr2[n] = {6,7,8};

    for(int i = 0; i < n;  i++ ){
        arr1[m+i] = arr2[i];
    }

    for(int i = 0; i < (m+n); i++){
        cout << arr1[i] << " ";
    }

    return 0;
}