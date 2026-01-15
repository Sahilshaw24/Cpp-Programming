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

     // Delete the first node
     if(head==NULL) cout << "Node not a exist" << endl;
     else{
          Node *temp = head;
          head = head->next;
          delete temp;
     } 
     while(head){
          cout << head->data << endl;
          head = head->next;
     }
}