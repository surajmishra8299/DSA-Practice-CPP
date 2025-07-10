#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,2,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);
    int unique;
    for(int i=0;i<n;i++){
        bool unique = true;

        for(int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j]){
                unique = false;
                break;
            }
        }
        if(unique){
            cout<<arr[i]<<" ";
        }
    }
 return 0;
}