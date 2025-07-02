#include<bits/stdc++.h>
// #include<math.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number: "<<endl;
     cin>>n;
     // Decimal to binary
     int i = 0;
     int ans = 0;
     while(n!=0){
          int bits = n&1;
          ans = (bits * pow(10,i)) + ans;
          n = n>>1;
          i++;
     }
     cout<<ans;

     // Binary to decimal
     // int i = 0;
     // int ans = 0;
     // while(n!=0){
     //      int digits = n % 10;
     //      if(digits==1){
     //           ans = ans + (digits * pow(2,i));
     //      }
     //      n = n/10;
     //      i++;
     // }
     // cout<<"Convert binary into decimal: "<<ans;
}