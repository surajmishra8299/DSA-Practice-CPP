#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int arr[] = {1,2,3,2,3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
 int count = 0;
   for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if(count % 2 != 0){
            cout<<"Odd Occurrences "<<arr[i];
            break;
        }
            
    }
}