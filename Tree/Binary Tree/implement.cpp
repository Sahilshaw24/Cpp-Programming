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

// Create binary tree using Recursion
TC = O(n)
// SC = O(h)->best Case(Height of binary tree between top to bottom) and O(n)->Worth case
Node *BinaryTree(){
     int x;
     cin >> x;
     if(x==-1) return NULL;
     Node *temp = new Node(x);

     // Create left side
     cout << "Enter the left side of : " << x ;
     temp->left = BinaryTree();

     // Create right side
     cout << "Enter the right side of : " << x ;
     temp->right = BinaryTree();
     return temp;
}

int main(){
     Node *root = NULL;
     int x,first,second;
     cout << "The root of binary tree : ";
     // cin >> x;

     // Create binary tree using Recursion
     root = BinaryTree();

     // Create binary tree Using way of level
//      queue<Node *>q; // Store node addresses 
//      root = new Node(x);
//      q.push(root);
//      while(!q.empty()){
//           Node *temp = q.front();
//           q.pop();

//           // Create left side
//           cout << "The left side node of " << temp->data <<":";
//           cin >> first;
//           // -1 means = The node will be not create
//           if(first!=-1){ 
//                temp->left = new Node(first);
//                q.push(temp->left);
//           }

//           // Create right side
//           cout << "The right side node of " << temp->data <<":";
//           cin >> second;
//           if(second!=-1){
//                temp->right = new Node(second);
//                q.push(temp->right);
//           }
//      }   
}