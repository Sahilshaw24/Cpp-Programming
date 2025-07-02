// #include<iostream>
// using namespace std;
// int main(){
//      char ch;
//      cout<<"The character elements is: "<<endl;
//      cin>>ch;
//      if(ch >='a' && ch<='z'){
//           cout<<"The character elements is lower case"<<endl;
//      }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[] = {10,30,40,30,20};
     // int size = sizeof(arr) / sizeof(arr[0]);
     int i = 4;
     // sort(arr,arr+i);
     reverse(arr,arr+i);
     for(int j=0;j<i;j++){
          cout << arr[j] << " ";
     }
}