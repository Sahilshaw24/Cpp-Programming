#include<iostream>
using namespace std;

// int unique(int arr[],int n){
     // for(int i=0;i<n;i++){
     //      bool isunique = true;
     //      for(int j=1;j<n;j++){
     //           if(i!=j && arr[i] == arr[j]){
     //                isunique = false;
     //                break;
     //           }
     //      }
     //      if(isunique)
     //           return arr[i];
     // }
     // return -1;
// }

int optimizeunique(int arr[],int size){
     // Using XOR operator
     int ans = 0;
     for(int i=0;i<size;i++){
          ans = ans^arr[i]; // XOR delete duplicate element
     }
     cout<<"The unique number is: "<<ans;
}

int main(){
     int unq[7] = {3,8,5,2,3,5,8};
     // int uniqueNumber = unique(unq,7);
     // if(uniqueNumber != -1){
     //      cout<<"The unique number is: "<<uniqueNumber;
     // }
     // else{
     //      cout<<"No unique number";
     // }

     optimizeunique(unq,7);
}