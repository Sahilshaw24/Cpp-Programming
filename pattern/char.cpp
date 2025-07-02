#include<iostream>
using namespace std;
int main(){
     // n = 3
     // A A A
     // B B B
     // C C C
     // int n;
     // cin>>n;
     // int i = 1;
     // char ch = 'A';
     // while(i<=n){
     //      int j = 1;
     //      while(j<=n){
     //           cout<<ch;
     //           j++;
     //      }
     //      ch++;
     //      cout<<endl;
     //      i++;
     // }

     // n = 3
     // A B C 
     // B C D 
     // C D E
     // int n;
     // cin>>n;
     // int i = 1;
     // while(i<=n){
     //      int j = 1;
     //      char ch = 'A'+i-1;
     //      while(j<=n){
     //           cout<<ch;
     //           j++;
     //           ch++;
     //      }
     //      cout<<endl;
     //      i++;
     // }

     // n = 3
     // A 
     // B B 
     // C C C
     // int n;
     // cin>>n;
     // int i = 1;
     // char ch = 'A';
     // while(i<=n){
     //      int j = 1;
     //      while(j<=i){
     //           cout<<ch;
     //           j++;
     //      }
     //      ch++;
     //      cout<<endl;
     //      i++;
     // }

     // n = 4
     // A 
     // B C 
     // C D E 
     // D E F G
     // int n;
     // cin>>n;
     // int i = 1;
     // while(i<=n){
     //      int j = 1;
     //      char ch = 'A'+i-1;
     //      while(j<=i){
     //           cout<<ch;
     //           j++;
     //           ch++;
     //      }
     //      cout<<endl;
     //      i++;
     // }

     // n = 4
     // D 
     // C D 
     // B C D 
     // A B C D
     int n;
     cin>>n;
     int i = 1;
     while(i<=n){
          int j = 1;
          char ch = 'A'+n-i;
          while(j<=i){
               cout<<ch;
               j++;
               ch++;
          }
          cout<<endl;
          i++;
     }
}