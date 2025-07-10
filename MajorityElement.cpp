#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2, 2,6, 6, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int val : arr) {
        int frq = 0;

        for (int el : arr) {
            if (el == val)
                frq++;
        }

        if (frq >= n / 2) {
            cout << val << endl;
            return 0;  // directly exit once found
        }
    }

    // If loop finishes and no element found
    cout << "-1" << endl;
    return 0;
}
