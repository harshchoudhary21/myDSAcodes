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
 int maxDepth(Node *root){
    if(root == nullptr){
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    return 1 + max(lh,rh);
 }