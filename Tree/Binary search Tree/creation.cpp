#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
          int data;
          Node *left;
          Node *right;
          Node(int value){
               data = value;
               left = NULL;
               right = NULL;
          }
};

// Create a binary search tree
// TC = O(n*n) , SC = O(n) or O(height)
Node *BinarySearchTree(Node *root,int target){
     if(!root){
          Node *temp = new Node(target);
          return temp;
     }
     if(root->data>target){
          root->left = BinarySearchTree(root->left,target);
     }
     else{
          root->right = BinarySearchTree(root->right,target);
     }
     return root;
}

// Insetion in the BST
// TC = O(n) , SC = O(n) or O(height)
Node *BSTInsert(Node *root){
     int x = 30;
     root = BinarySearchTree(root,x);
     return root;
}
// In BST , Using In-Order Traversal then array will bw sort
void InOrder(Node *root){
     if(root==NULL) return;
     InOrder(root->left);
     cout << root->data << " ";
     InOrder(root->right);
}

int main(){
     Node *root = NULL;
     int arr[] = {10,6,20,8,9,12,27,32,15,5};
     for(int i=0;i<10;i++){
          root = BinarySearchTree(root,arr[i]);
     }
     root = BSTInsert(root);
     InOrder(root);
}