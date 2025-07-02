#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int temp[],int low,int mid,int high){ 
     int left = low;
     int right = mid + 1;
     int k = low;
     while(left<=mid && right<=high){
          if(arr[left]<=arr[right]){
               temp[k] = arr[left];
               left++;
               k++;
          }
          else{
               temp[k] = arr[right];
               right++;
               k++;
          }
     }
     while(left<=mid){
          temp[k] = arr[left];
          left++;
          k++;
     }
     while(right<=high){
          temp[k] = arr[right];
          right++;
          k++;
     }
     for(int i=low;i<=high;i++){
          arr[i] = temp[i];
     }
}
int mergesort(int arr[],int temp[],int low,int high){
     if(low<high){
          int mid = (low+high)/2;
          mergesort(arr,temp,low,mid);
          mergesort(arr,temp,mid+1,high);
          merge(arr,temp,low,mid,high);
     }
}
int main(){
     int arr[] = {3,2,4,1,3};
     int size = sizeof(arr) / sizeof(arr[0]);
     int temp[size];
     mergesort(arr,temp,0,size-1);
     for(int i=0;i<size;i++){
          cout<<arr[i] << " ";
     }
     return 0;
}