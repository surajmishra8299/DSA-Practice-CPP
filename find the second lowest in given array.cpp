#include <bits/stdc++.h>
using namespace std;

int main() { 
    int arr[] = {5, 3, 9, 1, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);  

    
    int lowest = INT_MAX;
    int secondLowest = INT_MAX;

     
    for (int i = 0; i < n; i++) {
        if (arr[i] < lowest) {
            secondLowest = lowest;  
            lowest = arr[i];  
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];  
        }
    }

    
    if (secondLowest == INT_MAX) {
        cout << "There is no second lowest value." << endl;
    } else {
        cout << "The second lowest value in the array is: " << secondLowest << endl;
    }

   
}
