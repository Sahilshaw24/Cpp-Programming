#include<iostream>
using namespace std;

int main(){
     // // Using Character with size
     // char arr[10];
     // cin >> arr;
     // cout << arr;

     // // Using String
     // string s;
     // // cin >> s; // Single word store
     // getline(cin,s); // Multiple senstense
     // cout << s;

     // // Escape Character
     // string s = "Sahil is a \"good\" boy";
     // cout << s;

     // Reverse String
     string str = "123456";
     int start = 0;
     int end = str.size() - 1;
     while(start < end){
          int temp = str[start];
          str[start] = str[end];
          str[end] = temp;
          start++;
          end--;
     }
     cout << str;
}