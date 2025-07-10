#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {7,10,4,3,20,15};

    int i,k=2;
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    cout << "Kth element is:" << arr[k-1];
    
    
    

}




