#include<iostream>
using namespace std;

// int intersection(int arr[],int brr[],int n,int m){
//      bool isInter = true;
//      for(int i=0;i<n;i++){
//           for(int j=0;j<m;j++){
//                if(arr[i]<brr[j])
//                     break;
//                if(arr[i] == brr[j]){
//                     isInter = false;
//                     cout<<"The intersection: "<<arr[i]<<endl;
//                     brr[j] = INT32_MIN; 
//                     break; 
//                }
//           }
//      }
//      if(isInter)
//           cout<<"-1";
// }

int Obtimizeintersec(int arr[],int brr[],int n,int m){
     // Two pointer approach
     int i = 0;
     int j = 0;
     while(i<n && j<m){
          if(arr[i] == brr[j]){
               cout<<arr[i]<<" ";
               i++;
               j++;
          }
          else if(arr[i] > brr[j]){
               j++;
          }
          else{
               i++;
          }
     }
}

int main(){
     int arr1[6] = {2,3,4,8,9,10};
     int arr2[3] = {1,2,10};
     // intersection(arr1,arr2,6,3);
     Obtimizeintersec(arr1,arr2,6,3);
}