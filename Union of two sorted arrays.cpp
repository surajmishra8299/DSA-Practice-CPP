#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {1,3,4,5,7};
    int B[] = {2,3,5,6};

    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    int i=0,j=0;

    while(i<m && j<n){
        if(A[i]<B[j]){
            cout<<A[i]<<" ";
            i++;
        }
        else if(A[i]>B[j]){
            cout<<B[j]<<" ";
            j++;
        }
        else{
            cout<<B[j]<<" ";
            j++;
            i++;
        }
    }

    while(i<m){
        cout<<A[i]<<" ";
        i++;
    }
    while(i<n){
        cout<<B[j]<<" ";
        j++;
    }
}