#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[][3],int m,int n){
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               cout << arr[i][j] << " ";
          }
     }
}

int main(){
     int m = 2;
     int n = 3;
     int arr[2][3] = {1,2,3,5,6,7};
     // for(int i=0;i<m;i++){
     //      for(int j=0;j<n;j++){
     //           cout << arr[i][j] << " ";
     //      }
     // }
     printArray(arr,m,n);
}