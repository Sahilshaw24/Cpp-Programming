#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[2][3] = {1,2,3,4,5,6};
     int brr[2][3] = {2,4,5,6,8,8};
     int ans[2][3];
     for(int i=0;i<2;i++){
          for(int j=0;j<3;j++){
               ans[i][j] = arr[i][j] + brr[i][j];
          }
     }
     for(int i=0;i<2;i++){
          for(int j=0;j<3;j++){
               cout << ans[i][j] << " ";
          }
     }
}