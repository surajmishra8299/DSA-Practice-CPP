#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n = 153;
    int digit;
    double sum = 0;
    int temp = n,count = 0;

    while(temp!=0){
        count++;
        temp = temp/10;
    }

    int num = n;
    while(num!=0){
        digit=num%10;
        sum = sum + pow(digit,count);
        num=num/10;
    }

    if(n==sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}