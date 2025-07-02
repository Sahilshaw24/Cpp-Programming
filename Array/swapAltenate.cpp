#include<iostream>
using namespace std;
int main(){
     int arr[6] = {1,2,3,4,5,6};
     int end = 1;
     for(int i=0;i<=5;i+=2){
          // int temp = arr[i] ;
          // arr[i] = arr[end];
          // arr[end] = temp;
          swap(arr[i],arr[end]);
          end+=2;
     }
     for(int i=0;i<=5;i++){
          cout<<arr[i] << " ";
     }
}