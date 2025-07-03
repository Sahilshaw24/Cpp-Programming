#include<bits/stdc++.h>
using namespace std;

// Intersection of two sorted array
// 1. Brute force
// TC = O(m*n) , SC = O(1)
vector<int> intersection(int arr[],int brr[],int m,int n){
     bool isInter = true;
     vector<int> ans;
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               if(arr[i]<brr[j])
                    break;
               if(arr[i] == brr[j]){
                    isInter = false;
                    ans.push_back(arr[i]);
                    brr[j] = INT32_MIN; 
                    break; 
               }
          }
     }
     return ans;
     if(isInter) cout<<"-1";
}

// 2. Optimal  Solution(Two pointer)
// TC = O(m+n)  , SC = O(1)
// int intersection(int arr[],int brr[],int m,int n){
//      // Two pointer approach
//      int i = 0;
//      int j = 0;
//      while(i<m && j<n){
//           if(arr[i] == brr[j]){
//                cout<<arr[i]<<" ";
//                i++;
//                j++;
//           }
//           else if(arr[i] > brr[j]){
//                j++;
//           }
//           else{
//                i++;
//           }
//      }
// }

int main(){
     int arr1[] = {2,3,4,8,9,10};
     int arr2[] = {1,2,4,8,9,10};
     int m = sizeof(arr1)/sizeof(arr1[0]);
     int n = sizeof(arr2)/sizeof(arr2[0]);
     vector<int> ans = intersection(arr1,arr2,m,n);
     for(auto it : ans){
          cout << it << " ";
     }
}