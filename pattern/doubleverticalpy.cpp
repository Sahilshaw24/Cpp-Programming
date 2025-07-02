#include<bits/stdc++.h>
using namespace std;

int print(int n){
     // n = 5
     // *                 *
     // * *             * *
     // * * *         * * *
     // * * * *     * * * *
     // * * * * * * * * * *
     // * * * *     * * * *
     // * * *         * * *
     // * *             * *
     // *                 *
     int space = 2*(n-1);
     for(int i=1;i<=2*n-1;i++){
          // star
          int star = i;
          if(i>n) star = 2*n-i;
          for(int j=1;j<=star;j++){
               cout << "*";
          }
          // space
          for(int j=1;j<=space;j++){
               cout << " ";
          }
          // star 
          for(int j=1;j<=star;j++){
               cout << "*";
          }
          cout<<endl;
          if(i<n) space-=2;
          else space+=2;
     }
}
int main(){
     int n;
     cout << "Enter a number: ";
     cin >> n;
     print(n);
}