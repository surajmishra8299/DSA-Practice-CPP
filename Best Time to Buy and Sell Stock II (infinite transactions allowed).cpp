#include<bits/stdc++.h>
using namespace std;

int main()
{
    int price[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(price)/sizeof(price[0]);

    int i;
    int maxP = 0;

    for(i=1;i<n;i++){
        if(price[i]>price[i-1]){
            maxP = maxP + (price[i] - price[i-1]);
        }
    }
    cout<< maxP << endl;
}