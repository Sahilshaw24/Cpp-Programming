#include <iostream>
#include <algorithm>
using namespace std;

// First and last occurence of the element
int firstOcc(int arr[],int size,int key){
     int start = 0;
     int end = size - 1;
     int mid = start + (end - start)/2;
     int ans = -1; 
     while(start <= end){
          mid = start + (end - start)/2;
          if(arr[mid] == key){
               ans = mid;
               end = mid - 1;
          }
          else if(arr[mid] > key){
               end = mid - 1;
          }
          else{
               start = mid + 1;
          }
     }
     return ans;
}

int lastOcc(int arr[],int size,int key){
     int start = 0;
     int end = size - 1;
     int mid = start + (end - start)/2;;
     int ans = -1; 
     while(start <= end){
          mid = start + (end - start)/2;
          if(arr[mid] == key){
               ans = mid;
               start = mid + 1;
          }
          else if(arr[mid] > key){
               end = mid - 1;
          }
          else{
               start = mid + 1;
          }
     }
     return ans;
}

int main() {
    int even[10] = {1,2,3,3,3,3,3,3,4,5};
    int odd[2] = {0,1};
    cout << "First and last occurence of 3 is at index " << firstOcc(even,10,3)  << " " << lastOcc(even,10,3) << endl;
 
    cout << "First and last occurence of 1 is at index " << firstOcc(odd,2,1)  << " " << lastOcc(odd,2,1) << endl;
    return 0;
}

// Find total no. of occurence = (last occurence - First occurence) + 1 