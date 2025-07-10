#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

  
    cout<<"Composite: ";
    for(int i=0;i<n;i++){
        int num = arr[i];
        bool isC = false;

        if(num>1){
            for(int j=2;j<num;j++){
                if(num%j==0){
                    isC = true;
                    break;
                }
            }

        }
        if(isC){
            cout<<num<<" ";
        }
    }
    return 0;
}