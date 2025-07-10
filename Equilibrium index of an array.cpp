#include <bits/stdc++.h>
using namespace std;

 
int equilibriumPoint(int arr[],int n)
{
    
    int leftsum, rightsum;

    for (int i = 0; i < n; ++i) {

        leftsum = 0;
        for (int j = 0; j < i; j++)
            leftsum += arr[j];
       
        rightsum = 0;
        for (int j = i + 1; j < n; j++)
            rightsum += arr[j];
      
        if (leftsum == rightsum)
            return i + 1;
    }
    return -1;
}

 
int main()
{
   
   int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
   int n = sizeof(arr)/sizeof(arr[0]);


    cout << equilibriumPoint(arr,n);
    
}
