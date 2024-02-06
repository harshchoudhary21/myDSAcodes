#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    public:
    Node(int data1,Node*next1,Node*prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
Node*createdoubleLL(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node*pre = head;
    for(int i = 1; i < arr.size(); i++){
        Node*temp = new Node(arr[i],nullptr,pre);
        pre->next = temp;
        pre = temp;
    }
    return head;
}
void printLL(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node*deleteHead(Node*head){
    if(head ==NULL||head->next = NULL){
        return NULL;
    }
    Node*pre = head;
    head = head->next;
    head->prev=nullptr;
    pre->next = nullptr;
    delete pre;
    return head;

}
Node*deleteTail(Node*head){
     if(head ==NULL||head->next = NULL){
        return NULL;
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    
    }
    Node*pre = temp->prev;
    pre->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}