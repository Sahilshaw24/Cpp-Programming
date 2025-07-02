#include<iostream>
using namespace std;
int main(){
     int n,digit;
     int sum = 0;
     int product = 1;
     cout<<"Enter a number: "<<endl;
     cin>>n;
     while(n){
          digit = n%10;
          product = product*digit;
          sum = sum + digit;
          n = n/10;
     }
     int diff = product - sum;
     cout<<"Difference the product and sum of digit of a number: "<<diff;
}
