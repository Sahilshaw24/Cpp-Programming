#include <iostream>
#include <algorithm>
using namespace std;

// Two pointer approach
int sort01(int arr[],int size){
     int i = 0;
     int j = size -1;
     while(i<j){
          if(arr[i] == 0) i++;
          else if (arr[j] == 1) j--;
          else if(arr[i] == 1 && arr[j] == 0){
               swap(arr[i],arr[j]);
               i++;
               j--;
          }
     }

}

int main() {
    int arr[] = {1,1,0,0,0,0,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort01(arr, size);
    for(int i=0;i<size;i++){
          cout<<arr[i] << " ";
     }

    return 0;
}