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

// Create a linked list
Node *CreateLinkedList(int arr[],int index,int size){
     if(index==size) return NULL;
     Node *temp = new Node(arr[index]);
     temp->next = CreateLinkedList(arr,index+1,size);
}

// Reverse linked list using iterative
// Node *ReverseLinkedList(Node *head){
//      Node *curr = head;
//      Node *prev,*fut = NULL;
//      while(curr!=NULL){
//           fut = curr->next;
//           curr->next = prev;
//           prev = curr;
//           curr = fut;
//      }
//      return prev;
// }


// Reverse linked list using recursion
Node *ReverseLinkedList(Node *curr,Node *prev){
     if(curr==NULL) return prev;
     Node *fut = curr->next;
     curr->next = prev;
     ReverseLinkedList(fut,curr);
}

int main(){
     int arr[5] = {2,4,6,8,10};
     Node *head = NULL;
     head = CreateLinkedList(arr,0,5);

     // Using Iterative
     // Node *newHead = ReverseLinkedList(head);

     // Using Recursion
     Node *newHead = ReverseLinkedList(head,NULL);
     
     // Print Linked List
     Node *temp = newHead;
     while(temp!=NULL){
          cout << temp->data << endl;
          temp = temp->next;
     }
}