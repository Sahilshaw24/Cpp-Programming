#include <iostream>
#include <algorithm>
using namespace std;

// Peak index in a mountain array
// Using Binary search with complexity of 0(logN)
int peakIndex(int arr[],int size){
     int start = 0;
     int end = size - 1;
     int mid = start + (end - start)/2;
     while(start < end){
          mid = start + (end - start)/2;
          if(arr[mid] < arr[mid + 1]){
               start = mid + 1;
          }
          else{
               end = mid;
          }
     }
     return start;
}

// Using linear search with complexity of 0(N)
int pI(int arr[],int size){
     int max = 0;
     int index = 0;
     for(int i = 0;i<size;i++){
          if(arr[i] > max){
               max = arr[i];
               index = i;
          }
     }
     return index;
}

int main(){
     int even[6] = {0,2,3,4,2,1};
     // int mountain = peakIndex(even,6);
     // cout << "Peak index in a mountain array: " << mountain << endl;

     cout << "Peak index in a mountain array: " << pI(even,6) << endl;
     return 0;
}