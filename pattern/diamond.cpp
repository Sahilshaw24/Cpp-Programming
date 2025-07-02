#include<bits/stdc++.h>
using namespace std;
int pyramid1(int n){
     // n = 5
     //         *
     //       * * *
     //     * * * * *
     //   * * * * * * *
     // * * * * * * * * *
     for(int i=0;i<n;i++){
          // Print space
          int space1 = n-i-1;
          for(int j=0;j<space1;j++){
               cout << " ";
          }
          // Print star(2nd triangle)
          for(int j=0;j<(2*i+1);j++){
               cout << "*";
          }
          // Print star(3rd triangle)
          int space2 = n-i-1;
          for(int j=0;j<space2;j++){
               cout << " ";
          }
          cout<<endl;
     }
}
int pyramid2(int n){
     // n = 5
     // * * * * * * * * *
     //   * * * * * * *
     //     * * * * *
     //       * * *
     //         *
     for(int i=0;i<n;i++){
          // Print space
          int space1 = i;
          for(int j=0;j<space1;j++){
               cout << " ";
          }
          // Print star(2nd triangle)
          for(int j=0;j<2*n-(2*i+1);j++){
               cout << "*";
          }
          // Print star(3rd triangle)
          int space2 = i;
          for(int j=0;j<space2;j++){
               cout << " ";
          }
          cout<<endl;
     }
}
// Combined of pyramid1 + pyramid2 = Barfi
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
int main(){
     int n;
     cout << "Enter the number: " ;
     cin >> n;
     pyramid1(n);
     pyramid2(n);
}