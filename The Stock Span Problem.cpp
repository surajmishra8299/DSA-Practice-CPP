#include<iostream>
using namespace std;

int main()
{
    int arr[] = {100 ,80, 60, 70 ,60 ,75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    for(int i=0;i<n;i++){
        int days = 0;
        for(int j=i;j>=0;j--){
            if(arr[i]>=arr[j]){
                days++;
            }
           
        }
        cout<<days<<" ";
    }

}