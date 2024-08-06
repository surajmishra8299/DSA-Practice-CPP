#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 4, 3, 2, 4, 4, 4, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);  

   
    int val = arr[0];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == val) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            val = arr[i];
            count = 1;
        }
    }
 
    count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == val) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << "Majority element: " << count << endl;
    } else {
        cout << "No majority element exists" << endl;
    }

    return 0;
}
