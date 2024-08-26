#include <bits/stdc++.h>
using namespace std;

void SetMatrixZeroes(vector<vector<int> >& arr)
{
    int n = arr.size(), m = arr[0].size();

  
    vector<int> row(n, 0), col(m, 0);

    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {

    
            if (arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {

         
            if (row[i] || col[j])
                arr[i][j] = 0;
        }
    }
}

 
int main()
{
    vector<vector<int> > arr = { { 0, 1, 2, 0 },
                                 { 3, 4, 5, 2 },
                                 { 1, 3, 1, 5 } };

 
    SetMatrixZeroes(arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
}
