#include<iostream>
using namespace std;
int main(){
     // n = 4
     //       1
     //     1 2 1
     //   1 2 3 2 1
     // 1 2 3 4 3 2 1
     int n;
     cin>>n;
     int i = 1;
     while(i<=n){
          // Print space
          int space = n-i;
          while(space>0){
               cout<<" ";
               space--;
          }
          // Print star(2nd triangle)
          int j = 1;
          while(j<=i){
               cout<<j;
               j++;
          }
          // Print star(3rd triangle)
          int start = i-1;
          while(start){
               cout<<start;
               start--;
          }
          cout<<endl;
          i++;
     }
}