#include<bits/stdc++.h>
using namespace std;

// Second Largest Element in the array
// 1. Brute Force
// TC = O(NLogN) + O(N) , SC = O(1)
// int Secondlargest(int arr[],int size){
//      sort(arr,arr+size);
//      int largest = arr[size-1];
//      int slargest;
//      for(int i=0;i<size-1;i++){
//           if(arr[i] < largest);
//           slargest = arr[i];
//      }
//      return slargest;
// }

// 2. Better Solution
// TC = O(N) + O(N) -> O(2N) 
// int Secondlargest(int arr[],int size){
//      int largest = arr[0];
//      for(int i=0;i<size;i++){
//           if(arr[i] > largest) largest = arr[i];
//      }
//      int slargest = -1;
//      for(int i=0;i<size;i++){
//           if(arr[i] > slargest && arr[i]!=largest){
//                slargest = arr[i];
//           } 
//      }
//      return slargest;
// }

// 3. Optimal Solution
// TC = O(N)
int Secondlargest(int arr[],int size){
     int largest = arr[0];
     int slargest = -1;
     for(int i=0;i<size;i++){
          if(arr[i] > largest){
               slargest = largest;
               largest = arr[i];
          }
          else if(arr[i] < largest && arr[i] > slargest) slargest = arr[i];
     }
     return slargest;
}

int main(){
     int arr[] = {1,3,12,7,2,9,4};
     int size = sizeof(arr)/ sizeof(arr[0]);
     cout << Secondlargest(arr,size);
}