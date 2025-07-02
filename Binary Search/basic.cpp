#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int arr[],int size,int key){
     int start = 0;
     int end = size - 1;
     int mid = start + (end - start)/2;
     while(start <= end){
          mid = start + (end - start)/2;
          if(arr[mid] == key)
               return mid;
          else if(arr[mid] > key){
               end = mid - 1;
          }
          else{
               start = mid + 1;
          }
     }
     return -1;
}

int main() {
    int even[6] = {3,7,11,13,19,27};
    int odd[5] = {2,5,8,14,26};
    int evenindex = binarysearch(even,6,3); 
    cout << "Index of 3 is " << evenindex << endl;

    int oddindex = binarysearch(odd,5,14); 
    cout << "Index of 14 is " << oddindex << endl;

    return 0;
}