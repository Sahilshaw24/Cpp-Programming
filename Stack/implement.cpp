#include<bits/stdc++.h>
using namespace std;

class Stack{
     int *arr;
     int size;
     int top;
     public:
     Stack(int s){
          size = s;
          top = -1;
          arr = new int[s];
     }
     // Push
     void push(int value){
          if(top==size-1) cout<<"Stack Overflow"<<endl;
          else{
               top++;
               arr[top] = value;
               cout<<"Pushed"<<value<<"into the Stack"<<endl;
          }
     }
     // Pop
     void pop(){
          if(top==-1) cout<<"Stack underflow"<<endl;
          else{
               top--;
               cout<<"Popped"<<arr[top+1]<<"from the Stack"<<endl;
          }
     }
     // Peek(Top value)
     int peek(){
          if(top==-1){
               cout<<"Stack is empty\n";
               return -1;
          }
          else{
               return arr[top];
          }
     }
     bool isEmpty(){
          return top==-1;
     }
     int isSize(){
          return top+1;
     }
};
int main(){
     Stack implement(5);
     implement.push(10);
     implement.push(20);
     implement.push(30);
     implement.pop();
     implement.pop();
     cout <<implement.peek()<<endl;
     implement.pop();
     cout << implement.isEmpty()<<endl;
     cout << implement.peek()<<endl;
     cout << implement.isSize();
}