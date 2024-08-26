#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {8, 4, 2, 1};

    int count=0;

    int i,j;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count;
}