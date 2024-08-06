#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,sum=0;
    
    for(i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of element:"<<sum;

}