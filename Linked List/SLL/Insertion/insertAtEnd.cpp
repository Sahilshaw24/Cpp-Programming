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
     Node *head;
     head = NULL;
     Node *a = head;
     
     // Insert the node at End
     int arr[4] = {10,20,30,40};

     // High Time Complexity(With Traversal)
     // for(int i=0;i<4;i++){
     //      if(head==NULL){
     //           head = new Node(arr[i]);
     //      }
     //      else{
     //           Node *a = head; // For traversal in the end
     //           while(a->next!=NULL){
     //                a = a->next;
     //           }
     //           Node *temp = new Node(arr[i]);
     //           a->next = temp;
     //      }
     // }

     // Better Time Complexity(Without Traversal)
     for(int i=0;i<4;i++){
          if(head==NULL){
               head = new Node(arr[i]);
               a = head;
          }
          else{
               while(a->next!=NULL){
                    a = a->next;
               }
               a->next = new Node(arr[i]);
               a = a->next;
          }
     }

     // Print the linked list
     Node *temp = head;
     while(temp!=NULL){
          cout<< temp->data << endl;
          temp = temp->next;
     }
}