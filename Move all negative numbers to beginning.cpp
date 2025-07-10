#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,-6,9,-8,3,-10};

    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}