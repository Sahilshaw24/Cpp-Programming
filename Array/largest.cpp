#include<bits/stdc++.h>
using namespace std;

// Largest Element in the array
// 1. Brute Force
// TC = O(NLogN) , SC = O(1)
// int largest(int a[],int size){
//      sort(a,a+size);
//      return a[size-1];
// }

// 2. Optimal Solution
// TC = O(N) , SC = O(1)
// int largest(int arr[],int size){
//      int larg = arr[0];
//      for(int i=0;i<size;i++){
//           if(arr[i] > larg) larg = arr[i];
//      }
//      return larg;
// }

int main(){
     int arr[] = {1,3,12,7,2,9,4};
     int size = sizeof(arr)/ sizeof(arr[0]);
     cout << largest(arr,size);
}