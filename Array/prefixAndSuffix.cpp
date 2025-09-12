#include<bits/stdc++.h>
using namespace std;

bool dividearray(int arr[],int size){
     int totalSum = 0;
     for(int i=0;i<size;i++){
          totalSum = totalSum + arr[i];
     }
     int prefix = 0;
     for(int i=0;i<size;i++){
          prefix = prefix + arr[i];
          if(prefix == totalSum/2) return 1;
     }
     return 0;
}
int main(){
     int arr[] = {3,4,-2,5,8,20,-10,8};
     int size = sizeof(arr)/sizeof(arr[0]);
     // int pre[size];
     // preffix[0] = arr[0];
     // for(int i=1;i<size;i++){
     //      preffix[i] = preffix[i-1] + arr[i];
     // }
     // for(int i=0;i<size;i++){
     //      cout << preffix[i] << " ";
     // }
     cout << dividearray(arr,size);
}