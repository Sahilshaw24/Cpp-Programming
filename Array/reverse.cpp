#include<iostream>
using namespace std;
int main(){
     int arr[5];
     
     int end = 4;
     for(int i=0;i<end;i+=1){
          int temp = arr[i] ;
          arr[i] = arr[end];
          arr[end] = temp;
          // swap(arr[i],arr[end]);
          end-=1;
     }
     for(int i=0;i<=4;i++){
          cout<<arr[i] << " ";
     }
}