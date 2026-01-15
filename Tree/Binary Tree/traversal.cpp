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

Node *BinaryTree(){
     int x;
     cin >> x;
     if(x==-1) return NULL;
     Node *temp = new Node(x);

     // Create left side
     cout << "Enter the left child of " << x << ":";
     temp->left = BinaryTree();

     // Create right side
     cout << "Enter the right child of " << x << ":";
     temp->right = BinaryTree();
     return temp;
}

// Pre-Order Traversal = Node -> Left -> Right
void PreOrder(Node *root,int count){
     if(root==NULL) return;
     cout << root->data << " ";
     count++;
     PreOrder(root->left,count);
     PreOrder(root->right,count);
}

// In-Order Traversal = Left -> Node -> Right
void InOrder(Node *root){
     if(root==NULL) return;
     InOrder(root->left);
     cout << root->data << " ";
     InOrder(root->right);
}

// Post-Order Traversal = Left -> Right -> Node
void PostOrder(Node *root){
     if(root==NULL) return;
     PostOrder(root->left);
     PostOrder(root->right);
     cout << root->data << " ";
}

// level Order Traversal
void LevelOrder(Node *root){
     queue<Node *>q; // Store node addresses 
     q.push(root);
     while(!q.empty()){
          Node *temp = q.front();
          q.pop();
          cout << temp->data << " ";

          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
     }
}

// Size of the binary tree
void TotalSize(Node *root,int &count){
     if(root==NULL) return;
     count++;
     Total(root->left,count);
     Total(root->right,count);
     // if(root == NULL) return 0;
     // return (1 + Total(root->left) + Total(root->right)); 
}

int main(){
     Node *root = NULL;
     cout << "Enter the binary tree of root :";
     root = BinaryTree();

     // cout << "Pre-Order :";
     // PreOrder(root);
     // cout << "\nIn-Order :";
     // InOrder(root);
     // cout << "\nPost-Order :";
     // PostOrder(root);
     // cout << "\nLevel-Order :";
     // LevelOrder(root);

     int count = 0;
     TotalSize(root,count);
     cout << "Size of the binary tree : " << count;
     // int ans = Total(root);
     // cout << ans;
}