#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {20,40,10,5,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    cout<<max;
}