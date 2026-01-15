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
Node *CreateLinkedList(int arr[],int index,int size){
     if(index==size) return NULL;
     Node *temp = new Node(arr[index]);
     temp->next = CreateLinkedList(arr,index+1,size);
}
int main(){
     int arr[5] = {2,4,6,8,10};
     Node *head = NULL;
     head = CreateLinkedList(arr,0,5);

     // Delete the last node
     Node *curr = head;
     Node *prev = NULL;
     if(head==NULL) cout << "Node not exist" << endl;
     else{
          if(head->next==NULL){
          Node *temp = head;
          head = NULL;
          delete temp;
          }
          else{
               while(curr->next!=NULL){
                    prev = curr;
                    curr = curr->next;
               }
               delete curr;
               prev->next = NULL;
          }
     }
     while(head){
          cout << head->data << endl;
          head = head->next;
     }
}