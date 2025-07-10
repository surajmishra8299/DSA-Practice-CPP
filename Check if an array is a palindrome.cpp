#include <iostream>
using namespace std;

int main() { 
    int arr[] = {1, 2, 3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 

    bool isPalindrome = true;

    
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    
    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    
}
