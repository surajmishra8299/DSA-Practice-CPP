#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int size)
{
    int res = INT_MIN;

    int i,j;

    for(i=0;i<size;i++){
        int cur_sum = 0;
        for(j=0;j<size;j++){
            int index = (i+j)%size;
            cur_sum += j*arr[index];
        }
        res = max(res,cur_sum);
    }
   return res;
}

int main()
{
    int arr[] = {8, 3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr, n) << endl;
}