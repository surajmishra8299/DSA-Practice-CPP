#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 2, -3, 1, 6};

    int i;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
          int sum = arr[i];
          if (sum == 0)
            return true;
        for (int j = i + 1; j < n; j++) {
        
            sum += arr[j];
            if (sum == 0)
                cout<<true;
        }
    }
  
}