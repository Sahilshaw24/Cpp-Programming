#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number: "<<endl;
     cin>>n;
     // for(int i=0;i<=30;i++){
     //      int ans = pow(2,i);
     //      if(ans == n){
     //           cout<<"true"<<endl; // return true;
     //      }
     // }
     // return false;
     // if(n<1){
     //      cout<<"false"<<endl;
     // }
     // else{
     //      if(n&(n-1)==0){
     //           cout<<"true"<<endl;;
     //      }
     //      else{
     //           cout<<"false";
     //      }
     // }

     int count = 0;
     if(n<0){
          cout<<"false";
     }
     while(n>0){
          if(n&1){
               count++;
          }
          n = n>>1;
     }
     if(count==1){
          cout<<"true";
     }
     else{
          cout<<"false";
     }
}