#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;

    int arr[] = {1, 1, 1, 1};

    int k = 2;

    int count = 0;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
            
    }
         cout<< count;
}
   
