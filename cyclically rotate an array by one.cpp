#include<bits/stdc++.h>
using namespace std;

void rot(int arr[],int n)
{
    int i;
    int last = arr[n-1];

    for(i=n-1;i>=1;i--){
        arr[i] = arr[i-1]; 
    }

    arr[0] = last;
     
}
int main()
{
    int arr[] = {1,2,3,4,5,6,9};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);

    rot(arr,7);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}