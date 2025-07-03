#include<bits/stdc++.h>
using namespace std;

// Union of two sorted array
// 1. Brute force
// TC = O(mlogn + nlogn) + O(m+n) , SC = O(m+n) + O(m+n)
// vector<int> UnionSortedArray(int arr1[],int arr2[],int m,int n){
//      set<int> st;
//      for(int i=0;i<m;i++){
//           st.insert(arr1[i]);
//      }
//      for(int j=0;j<n;j++){
//           st.insert(arr2[j]);
//      }
//      vector<int> ans;
//      for(auto it : st){
//           ans.push_back(it);
//      }
//      return ans;
// }

// 2. optimal Solution(Two pointer)
// TC = O(m+n) , SC = O(m+n)
vector<int> UnionSortedArray(int a[],int b[],int m,int n){
     vector<int> ans;
     int i = 0;
     int j = 0;
     while(i<m && j<n){
          if(a[i]<=b[j]){
               if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i]);
               }
               i++;
          }
          else{
               if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j]);
               }
               j++;
          }
     }
     while(i<m){
          if(ans.size() == 0 || ans.back() != a[i]){
               ans.push_back(a[i]);
          }
          i++;
     }
     while(j<n){
          if(ans.size() == 0 || ans.back() != b[j]){
               ans.push_back(b[j]);
          }
          j++;
     }
     return ans;
}

int main(){
     int arr1[] = {2,3,4,8,9,10};
     int arr2[] = {1,2,4,8,9,10};
     int m = sizeof(arr1)/sizeof(arr1[0]);
     int n = sizeof(arr2)/sizeof(arr2[0]);
     vector<int> ans = UnionSortedArray(arr1,arr2,m,n);
     for(auto it : ans){
          cout << it << " ";
     }
}