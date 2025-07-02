#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int low,int high){ 
     int pivot = arr[low];
     int i = low;
     int j = high;
     while(i<j){
          while(arr[low]<arr[i] && arr[j]<arr[low])
               swap(arr[i],arr[j]);
          while(arr[low]>=arr[i] && i<=high)
               i++;
          while(arr[j]>arr[low])
               j--;
     }
     swap(arr[low],arr[j]);
     return j;
}
int quicksort(int arr[],int low,int high){
     if(low<high){
          int pIndex = part(arr,low,high);
          quicksort(arr,low,pIndex - 1 );
          quicksort(arr,pIndex+1,high);
     }
}
int main(){
     int arr[] = {7,1,1,4,0,5,2,8};
     int size = sizeof(arr) / sizeof(arr[0]);
     quicksort(arr,0,size-1);
     for(int i=0;i<size;i++){
          cout<<arr[i] << " ";
     }
     return 0;
}