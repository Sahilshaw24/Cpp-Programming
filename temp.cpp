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

void Total(Node *root,int &count){
     if(root==NULL) return;
     count++;
     Total(root->left,count);
     Total(root->right,count);
}

int main(){
     Node *root = BinaryTree();
     int count = 0;
     Total(root,count);
     cout << "size: " << count;
}