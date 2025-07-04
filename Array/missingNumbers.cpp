#include<bits/stdc++.h>
using namespace std;

// Missing Number in the array
// 1. Brute Force
// TC = O(n*n) , SC = O(1)
// int MissingNumber(int arr[],int size){
//      int n = size-1;
//      for(int i=1;i<=n;i++){
//           int flag = 0;
//           for(int j=0;j<=n-1;j++){
//                if(arr[j] == i){
//                     flag = 1;
//                     break;
//                }
//           }
//           if(flag == 0) return i;
//      }
//      return -1;
// }

// 2. Better Solution(Using hashing)
// TC = O(n+n) , SC = O(n)
// int MissingNumber(int arr[],int size){
//      int n = size-1;
//      int hash[size] = {0};
//      for(int i=0;i<n;i++){
//           hash[arr[i]]++;
//      }
//      for(int i=1;i<size;i++){
//           if(hash[i] == 0) return i;
//      }
//      return -1;
// }

// 3. Optimal Solution
int MissingNumber(int arr[],int size){
     // TC = O(n) , SC = O(1) // But not better during of stack overflow
     // int n = size-1;
     // int sum1 = (n *(n+1))/2;
     // int sum2 = 0;
     // for(int i=0;i<n-1;i++){
     //      sum2 = sum2 + arr[i];
     // }
     // int sum = sum1 - sum2;
     // return sum;
     
     // TC = O(n) , SC = O(1)
     int n = size-1;
     int xor1 = 0;
     int xor2 = 0;
     for(int i=0;i<n;i++){
          xor2 = xor2^arr[i];
          xor1 = xor1^(i+1);
     }
     xor1 = xor1^size;
     return xor1^xor2;
}

int main(){
     int arr[] = {1,2,3,4,5,7};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout << MissingNumber(arr,size+1) << endl; 
}