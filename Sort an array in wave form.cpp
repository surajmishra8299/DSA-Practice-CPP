#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}