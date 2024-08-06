#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[5] = {11,12,13,14,15};

    int n = sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
     
    for(i=0;i<n;i++)
    {
        arr1[i] = arr[n-i-1];
    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
}