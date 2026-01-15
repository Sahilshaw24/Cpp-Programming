#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
          int data;
          Node *next;
          Node(int value){
               data = value;
               next = NULL;
          }
};
int main(){
     // Node a(4); // Static way to create Node

     // Dynamic way to create Node
     Node *head;
     head = new Node(4);
     // cout << head->data << endl;
     // cout << head->next << endl;

     // Insert Node at Begining
     int arr[3] = {10,20,30};
     
     for(int i=0;i<3;i++){
          // If Node is not exist
          if(head==NULL){
               head = new Node(arr[i]);
          }
          // If Node is exist
          else{
               Node *temp;
               temp = new Node(arr[i]);
               temp->next = head;
               head = temp;
          }
     }
     // Traversal a linked list
     Node *temp = head;
     while(temp!=NULL){
          cout << temp->data <<endl;
          temp = temp->next;
     }
}