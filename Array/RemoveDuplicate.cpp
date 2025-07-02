#include<bits/stdc++.h>
using namespace std;

// Remove duplicates in place from sorted array
// 1. Brute force
// TC = NlogN + N
// SC = O(N)
// int removedup(int arr[],int size){
//      set<int> st;
//      for(int i=0;i<size;i++){
//           st.insert(arr[i]); // O(NlogN)
//      }
//      int index = 0;
//      for(auto p:st){
//           arr[index] = p;
//           index++;
//      }
//      return index;
// }

// 2. Optimal Solution(2 pointer)
// TC = O(N)
// int removedup(int arr[],int size){
//      int i = 0;
//      for(int j=1;j<size;j++){
//           if(arr[j]!=arr[i]){
//                arr[i+1] = arr[j];
//                i++;
//           }
//      }
//      return i+1;
// }

int main(){
     int arr[] = {1,3,3,3,3,4,5,5};
     int size = sizeof(arr) / sizeof(arr[0]);
     int n = removedup(arr,size);
     for(int k=0;k<n;k++){
          cout << arr[k] << " ";
     }
}