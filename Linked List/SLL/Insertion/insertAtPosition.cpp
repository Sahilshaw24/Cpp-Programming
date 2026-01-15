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
     Node *head = NULL;
     Node *a = NULL;

     int arr[5] = {2,4,6,8,10};
     for(int i=0;i<5;i++){
          if(head==NULL){
               head = new Node(arr[i]);
               a = head;
          }
          else{
               a->next = new Node(arr[i]);
               a = a->next;
          }
     }

     // Insert the node at particual position
     int x = 3; // position
     Node *temp = head;
     for(int i=0;i<x-1;i++){
          temp = temp->next;
     }
     Node *temp2 = new Node(30);
     temp2->next = temp->next;
     temp->next = temp2;

     // Print the linked list
     Node *print = head;
     while(print!=NULL){
          cout<< print->data << endl;
          print = print->next;
     }
}