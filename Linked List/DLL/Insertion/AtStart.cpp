#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
          int data;
          Node *next;
          Node *prev;
          Node(int value){
               data = value;
               next = NULL;
               prev = NULL;
          }
};

// Create a Doubly linked list
Node *CreateLinkedList(int arr[],int index,int size,Node *back){
     if(index==size) return NULL;
     Node *temp = new Node(arr[index]);
     temp->prev = back;
     temp->next = CreateLinkedList(arr,index+1,size,temp);
}

int main(){
     int arr[5] = {2,4,6,8,10};
     Node *head = NULL;
     head = CreateLinkedList(arr,0,5,NULL);

     // int x = 3;
     // Node *newHead = head;
     // while(--x){
     //      newHead = newHead->next;
     // }
     // cout << newHead->prev->data;

     // Print the array
     Node *temp = head;
     while(temp!=NULL){
          cout << temp->data << endl;
          temp = temp->next;
     }
}