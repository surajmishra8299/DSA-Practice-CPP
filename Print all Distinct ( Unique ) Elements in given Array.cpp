#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int i,j;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j])
                break;
        }
        if(i==j)
            cout<<arr[i]<<" ";
    }
}