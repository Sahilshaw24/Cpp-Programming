#include<bits/stdc++.h>
using namespace std;

// Row index with max sum
int main(){
     int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,1,4};
     int maxSum = INT16_MIN;
     int index = 1;
     for(int i=0;i<4;i++){
          int totalSum = 0;
          for(int j=0;j<3;j++){
               totalSum = totalSum + arr[i][j];
               if(maxSum < totalSum){
                    maxSum = totalSum;
                    index = i;
               }
         }
     }
     cout << index;
}