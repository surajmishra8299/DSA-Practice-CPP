#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[4][4] = {{0,1,1,1,},{0,0,1,1,},{1,0,0,0},{0,0,0,0}};

    int index = -1;
    int maxC = 0;
   
    int i,j;

    for(i=0;i<4;i++){
        int count = 0;
        for(j=0;j<4;j++){
            if(A[i][j]==1){
                count++;
            }
        }
        if(count>maxC){
            maxC = count;
            index = i;
        }
   
    }
     cout<<index;
    
}