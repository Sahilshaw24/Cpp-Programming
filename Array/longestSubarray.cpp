#include<bits/stdc++.h>
using namespace std;

// Longest Subarray with sum k
// 1. Brute force
// TC = O(n*n) , SC = O(1)
// int longestSubarray(int arr[],int size,int k){
//      int maxlen = 0;
//      for(int i=0;i<size;i++){
//           int sum = 0;
//           for(int j=i;j<size;j++){
//                sum = sum + arr[j];
//                if(sum == k){
//                     maxlen = max(maxlen,j-i+1);
//                }
//           }
//      }
//      return maxlen;
// }

// 2. Optimal Solution
// TC = O(n) , SC = O(1)
int longestSubarray(int arr[],int size,int k){
     int left = 0;
     int right = 0;
     int sum = arr[0];
     int maxlen = 0;
     while(right<size){
          while(left<=right && sum > k){
               sum = sum - arr[left];
               left++;     
          }
          if(sum == k){
               maxlen = max(maxlen,right-left+1);
          }
          right++;
          sum  = sum + arr[right];
     }
     return maxlen;
}

int main(){
     int arr[] = {1,3,2,1,1,1,1,2,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout << longestSubarray(arr,size,5);
}