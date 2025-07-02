#include<iostream>
using namespace std;
int main(){
     // n = 4
     // 1 2 3 4 4 3 2 1
     // 1 2 3 * * 3 2 1
     // 1 2 * * * * 2 1
     // 1 * * * * * * 1
     int n;
     cin>>n;
     int i = 1;
     while(i<=n){
          // Print star(1st triangle)
          int j = 1;
          while(j<=n-i+1){
               cout<<j;
               j++;
          }
          // Print star
          int space = 2*(i-1);
          while(space){
               cout<<"*";
               space--;
          }
          // // Print 1st space(1st triangle)
          // int space = i-1;
          // while(space){
          //      cout<<"*";
          //      space--;
          // }
          // // Print 2nd space(2nd triangle)
          // int space2 = i-1;
          // while(space2){
          //      cout<<"*";
          //      space2--;
          // }
          // Print star(2nd triangle)
          int start = n-i+1;
          while(start){
               cout<<start;
               start--;
          }
          cout<<endl;
          i++;
     }
}