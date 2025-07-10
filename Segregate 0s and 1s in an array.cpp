#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    int i,count = 0;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(i=0;i<count;i++){
        arr[i] = 0;
    }
    for(i=count;i<n;i++){
        arr[i] = 1;
    }

    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
