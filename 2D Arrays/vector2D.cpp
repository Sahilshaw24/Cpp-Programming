#include<bits/stdc++.h>
using namespace std;

int main(){
     int row = 3;
     int col = 3;
     // int arr[4][3] = {1,2,3,4,5,6,6,7,8,9,10,12};
     vector<vector<int>>arr(3,vector<int>(3,1));
     for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
               cout << arr[i][j] << " ";
          }
     }
}