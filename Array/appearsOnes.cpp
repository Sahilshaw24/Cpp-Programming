#include<bits/stdc++.h>
using namespace std;

// Find the element that appears ones and other are twice
// 1. Brute Force
// TC = O(n*n) , SC = O(1)
// int appearsOnes(int arr[],int size){
//      for(int i=0;i<size;i++){
//           int num = arr[i];
//           int count = 0;
//           for(int j=0;j<size;j++){
//                if(arr[j] == num) count++;
//           }
//           if(count == 1) return num;
//      }
// }

// 2. Better(using hash and map)
// TC = O(3n) , SC = O(maxi) -> Depends upon size of hashing
// int appearsOnes(int arr[],int size){
//      int maxi = 0;
//      for(int i=0;i<size;i++){
//           maxi = max(maxi,arr[i]);
//      }
//      int hash[maxi] = {0};
//      for(int i=0;i<size;i++){
//           hash[arr[i]]++;
//      }
//      for(int i=0;i<size;i++){
//           if(hash[arr[i]] == 1) return arr[i]; 
//      }
// }

// Using Map(For negative , big number of array)
// TC = O(nlogn) + O(n/2 + 1) , SC = O(n/2 + 1)
// int appearsOnes(int arr[],int size){
//      map<long long , int> mpp;
//      for(int i=0;i<size;i++){
//           mpp[arr[i]]++;
//      }
//      for(auto it : mpp){
//           if(it.second == 1) return it.first ;
//      }
// }

// 3. Optimal Solution
// TC = O(n) , SC = O(1)
int appearsOnes(int arr[],int size){
     int x = 0;
     for(int i=0;i<size;i++){
          x = x^arr[i]; 
     }
     return x;
}

int main(){
     int arr[] = {1,1,2,2,4,0,3,3,0};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout << appearsOnes(arr,size);
}