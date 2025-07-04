#include<bits/stdc++.h>
using namespace std;

// Maximum Consecutive Ones in the array
// Optimal Solution
// TC = O(n) , SC = O(1)
int MaxiConsecutiveOnes(int arr[],int size){
     int maximum = 0;
     int count = 0;
     for(int i=0;i<size;i++){
          if(arr[i] == 1){
               count++;
               maximum = max(count,maximum);
          }
          else{
               count = 0;
          }
     }
     return maximum;
}

int main(){
     int arr[] = {1,1,1,1,0,0,1,1,1,0,1,1,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout << MaxiConsecutiveOnes(arr,size);
}