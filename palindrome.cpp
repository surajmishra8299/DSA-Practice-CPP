#include <iostream>
using namespace std;

int main()
{
      int n = 121;
      int num = n;
      int digit,rev=0;

      while(num!=0){
        digit = num%10;
        rev = rev*10+digit;
        num=num/10;
      }

      if(n==rev){
        cout<<"Palindrome";
      }
      else{
        cout<<"Not Palindrome";
      }
}
