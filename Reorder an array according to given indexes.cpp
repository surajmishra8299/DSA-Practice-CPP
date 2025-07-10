#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 50, 40, 70, 60, 90 };
    int index[] = { 3, 0, 4, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int i;
    int temp[n];

    for(i=0;i<n;i++){
        temp[index[i]] = arr[i];
    }

    for(i=0;i<n;i++){
        arr[i] = temp[i];
        index[i] = i;
    }

    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
 
}