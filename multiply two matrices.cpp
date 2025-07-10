#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m[3][2] = {{1,1},{2,2},{3,3}};
    int n[2][3] = {{1,1,1},{2,2,2}};

    int i,j,k;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int res[3][3] = {0};
            for(k=0;k<2;k++){
                res[i][j] += m[i][k] * n[k][j];
            }
              cout << res[i][j] << "\t";
        }

        cout << endl;
    }
  

}