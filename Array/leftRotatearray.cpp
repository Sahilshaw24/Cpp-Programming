#include<bits/stdc++.h>
using namespace std;

// 1. Left rotate array by one place in the array
// Optimal Solution
// TC = O(N) , SC = O(1)
// int leftRoatate(int arr[],int size){
//      int temp = arr[0];
//      for(int i=1;i<size;i++){
//           arr[i-1] = arr[i];
//      }
//      arr[size-1] = temp;
// }

// 2. Left rotate array by d place in the array
// Brute force
// TC = O(N+d) , SC = O(d)
// int leftRotate(int arr[],int size,int d){
//      d = d%size;
//      int temp[d];
//      for(int i=0;i<d;i++){
//           temp[i] = arr[i];
//      }
//      // Right to left Rotate
//      for(int i=d;i<size;i++){
//           arr[i-d] = arr[i];
//      }
//      // Left to Right Rotate
//      for(int i=size-d;i<size;i++){
//           arr[i] = temp[i-(size-d)];
//      }
// }

// Optimal Solution
// TC = O(N) , SC = O(1)
int reverse1(int arr[],int start,int end){
     while(start<=end){
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
     }
}
int leftRotate(int arr[],int size,int d){
     d = d%size;
     reverse1(arr,0,d-1);
     reverse1(arr,d,size-1);
     reverse1(arr,0,size-1);
}

int main(){
     int arr[] = {1,3,12,7,2,9,4};
     int size = sizeof(arr)/ sizeof(arr[0]);
     int d;
     cin >> d;
     leftRotate(arr,size,d);
     for(int j=0;j<size;j++){
          cout << arr[j] << " " ;
     }
}