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

// Create a BST
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

Node *BSTDelete(Node *root,int target){
     // Base Condition
     if(!root) return NULL;

     if(root->data>target){
          root->left = BSTDelete(root->left,target);
     }
     else if(root->data<target){
          root->right = BSTDelete(root->right,target);
     }
     else{
          // Only exist leaf node
          if(!root->left && !root->right){
               delete root;
               return NULL;
          }

          // Only Right child exist
          else if(!root->left){
               Node *temp = root->right;
               delete root;
               return temp;
          }
          // Only left child exist
          else if(!root->right){
               Node *temp = root->left;
               delete root;
               return temp;
          }
          // Both child exist
          else{
               Node *child = root->left;
               Node *parent = root;
               while(child->right){
                    parent = child;
                    child = child->right;
               }
               if(root==parent){
                    child->right = root->right;
                    delete root;
                    return child;
               }
               else{
                    parent->right = child->left;
                    child->left = root->left;
                    child->right = root->right;
                    delete root;
                    return child;
               }
          }
     }
}

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
     int x = 20;
     root = BSTDelete(root,x);
     InOrder(root);
}