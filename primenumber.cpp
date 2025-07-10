#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n<=1){
        cout<<"Not Prime";
    }

    cout<<"Prime Number: ";
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}