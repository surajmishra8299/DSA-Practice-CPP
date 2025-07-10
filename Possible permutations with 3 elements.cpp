#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3};

    sort(arr,arr+3);

    cout<<"All possible permutation: "<<endl;

    do{
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<endl;
    } while(next_permutation(arr,arr+3));
}