#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[] = {1,2,3,4,5,6,5};
     int size = sizeof(arr) / sizeof(arr[0]);
     int sorted = arr[0];
     int check = 0;
     for(int i=1;i<size;i++){
          if(arr[i] >= sorted){
               sorted = arr[i];
               check = 1;
          }
          else{
               check = 0;
               break;
          }
     }
     if(check) cout << "true" << endl;
     else cout << "false" << endl;
}