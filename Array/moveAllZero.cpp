#include<bits/stdc++.h>
using namespace std;

// Move all zeros to the end of the array
// 1. Brute Force
// TC = O(2N) , SC = O(N)
// int moveAllZero(int arr[],int size){
//      vector<int>temp;
//      for(int i=0;i<size;i++){
//           if(arr[i] != 0){
//                temp.push_back(arr[i]);
//           }
//      }
//      for(int i=0;i<temp.size();i++){
//           arr[i] = temp[i];
//      }
//      for(int i=temp.size();i<size;i++){
//           arr[i] = 0;
//      }
// }

// 2. Optimal Solution
// TC = O(N) , SC = O(1)
// int moveAllZero(int arr[],int size){
     // 1st Approach
     // int i = 0;
     // int j = 1;
     // while(j<size){
     //      if(arr[i] == 0 && arr[j] != 0){
     //           swap(arr[i],arr[j]);
     //           i++;
     //           j++;
     //      }
     //      else if(arr[i]==0 && arr[j]==0) j++;
     //      else {
     //           i++;
     //           j++;
     //      }
     // }

     // 2nd Approach
     // int j = -1;
     // for(int i=0;i<size;i++){
     //      if(arr[i] == 0){
     //           j = i;
     //           break;
     //      }
     // }
     // for(int i=j+1;i<size;i++){
     //      if(arr[i] != 0){
     //           swap(arr[j],arr[i]);
     //           j++;
     //      }
     // }
// }

int main(){
     int arr[] = {0,1,0,0,0,3,4,0};
     int size = sizeof(arr)/ sizeof(arr[0]);
     moveAllZero(arr,size);
     for(int j=0;j<size;j++){
          cout << arr[j] << " " ;
     }
}