 
#include <bits/stdc++.h>
using namespace std;

int firstRepeatingElement(int arr[], int n)
{
	 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
		 
			if (arr[i] == arr[j]) {
				return i;
			}
		}
	}
 return -1;
}

 
int main()
{
 
	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
 
	int index = firstRepeatingElement(arr, n);

	cout << "First repeating element is " << arr[index] << endl;
 

 
}
