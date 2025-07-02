#include<bits/stdc++.h>
using namespace std;

int print1(int n){
     // n = 5
     // **********
     // ****  ****
     // ***    ***
     // **      **
     // *        *
     // *        *
     // **      **
     // ***    ***
     // ****  ****
     // **********
     int space = 0;
     for(int i=0;i<n;i++){
          // 1st star
          for(int j=0;j<n-i;j++){
               cout << "*";
          }
          // space
          for(int j=0;j<space;j++){
               cout << " ";
          }
          // 2nd star
          for(int j=0;j<n-i;j++){
               cout << "*";
          }
          cout<<endl;
          space+=2;
     }
}
int print2(int n){
     int space = 2*(n-1);
     for(int i=0;i<n;i++){
          // 1st star
          for(int j=0;j<=i;j++){
               cout << "*";
          }
          // space
          for(int j=0;j<space;j++){
               cout << " ";
          }
          // 2nd star
          for(int j=0;j<=i;j++){
               cout << "*";
          }
          cout<<endl;
          space-=2;
     }
}
int main(){
     int n;
     cout << "Enter a number: ";
     cin >> n;
     print1(n);
     print2(n);
}