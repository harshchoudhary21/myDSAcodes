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
int main(){
    struct Node*root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(3);
}