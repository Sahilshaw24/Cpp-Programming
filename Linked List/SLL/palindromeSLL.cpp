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

bool Palindrome(Node *root){
     // Count number of nodes
     int count = 0;
     Node *temp = root;
     while(temp){
          count++;
          temp = temp->next;
     }
     count = count / 2;

     // Divide into one linked list
     Node *newHead = root, *prev = NULL;
     while(count--){
          prev = newHead;
          newHead = newHead->next;
     }
     prev->next = NULL;

     // Reverse the second linked list 
     Node *fut;
     while(newHead){
          fut = newHead->next;
          newHead->next = prev;
          prev = newHead;
          newHead = fut;
     }

     // Check palindrome
     Node *head1 = root, *head2 = prev;
     while(head1){
          if(head1->data != head2->data) return 0;
          head1 = head1->next;
          head2 = head2->next;
     }
     return 1;
}
int main(){
     int arr[] = {1,1,2,2,1,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     Node *head = NULL;
     head = CreateLinkedList(arr,0,size);
     cout << Palindrome(head);
}