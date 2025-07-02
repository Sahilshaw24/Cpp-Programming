#include<iostream>
using namespace std;

int dublicate(int arr[],int n){
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               if(arr[i] == arr[j]){
                    cout<<"The dublicate element is: "<<arr[i]<<endl;
               }
          }
     }
}

int Alternatedublicate(int arr[],int n){
     // Using Xor operator
     int ans = 0;
     for(int i=0;i<n;i++){
          ans = ans^arr[i];
     }
     for(int i=1;i<n;i++){
          ans = ans ^i;
     }
     
     cout<<"The dublicate element is: "<<ans;
}

int main(){
     int dub[7] = {1,9,5,2,4,5,4};
     int dubb[8] = {1,4,2,24,13,15,24,7};
     // dublicate(dub,7);
     Alternatedublicate(dubb,8);
}