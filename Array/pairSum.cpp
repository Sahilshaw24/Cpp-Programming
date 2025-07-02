#include<iostream>
// #include<algorithm>
using namespace std;

// In sorted array , Find pair of sum with also each pair sorted and return the list of pairs also sorted
// Brute force approach
int pairsum(int arr[],int sum,int n){
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               if(arr[i] + arr[j] == sum){
                   int mininum = min(arr[i],arr[j]);
                   int maxinum = max(arr[i],arr[j]);
                   cout<< "(" << mininum << "," << maxinum << ")" <<endl;
               }
          }     
     }
}

int main(){
     int arr1[5] = {2,-3,3,3,-2};
     int sum = 0;
     pairsum(arr1,sum,5);
}