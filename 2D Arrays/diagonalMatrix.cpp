#include<bits/stdc++.h>
using namespace std;

// Sum of diagonal element
int printSumDia(int arr[][3],int row,int col){
     int firstDiagonal = 0;
     int secondDiagonal = 0;
     int i = 0;
     while(i<row){
          firstDiagonal = firstDiagonal + arr[i][i];
          i++;
     }
     i = 0;
     int j = col - 1;
     while(j>=0){
          secondDiagonal = secondDiagonal + arr[i][j];
          i++;
          j--;
     }
     cout << firstDiagonal << " " << secondDiagonal ;
}
int main(){
     int arr[3][3] = {3,4,2,6,8,4,1,10,8};
     int row = 3;
     int col = 3;
     printSumDia(arr,row,col);
}