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
 int maxDiameter(Node *root,int maxi){
    maxi = 0;
    if(root == nullptr){
        return 0;
    }
    int lh = maxDiameter(root->left,maxi);
    int rh = maxDiameter(root->right,maxi);
    maxi = max(maxi,lh+rh);
    return 1 + max(lh,rh);
 }