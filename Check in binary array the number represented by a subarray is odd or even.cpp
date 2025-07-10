 
#include<bits/stdc++.h> 
using namespace std; 

 
void checkEVENodd (int arr[], int n, int l, int r) 
{ 
 
	if (arr[r] == 1) 
		cout << "odd" << endl; 

 
	else
		cout << "even" << endl; 
} 

 
int main() 
{ 
	int arr[] = {1, 1, 0, 0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	checkEVENodd (arr, n, 0, 3); 
	return 0; 
} 
