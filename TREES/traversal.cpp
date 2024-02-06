//DFS
//Three types ->Inorder,Preorder,Postorder
#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node*left;
   struct Node*right;
   Node(int val){
    data = val;
    left = nullptr;
    right = nullptr;
   }
};
//Preorder Traversal
void preorder(Node*root,vector<int>&preOrder){
    if(root == NULL){
        return;
    }
    preOrder.push_back(root->data);
    preorder(root->left,preOrder);
    preorder(root->right,preOrder);

}
void inorder(Node*root,vector<int>&inOrder){
    if(root == NULL){
        return;
    }
    preorder(root->left,inOrder);
    inOrder.push_back(root->data);
    preorder(root->right,inOrder);

}
void postorder(Node*root,vector<int>&postOrder){
    if(root == NULL){
        return;
    }
    postorder(root->left,postOrder);
    preorder(root->right,postOrder);
    postOrder.push_back(root->data);

}
  vector<int> levelOrder(Node* root) {
        vector<int> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<Node*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            Node *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->data); 
        }
        return ans; 
    }
 