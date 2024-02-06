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
Node*reverseLL(Node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    stack<int>st;
    Node*temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        temp->data = st.top();
        temp = temp->next;
    }
    return head;
}
Node*reverse2pointer(Node*head){
     if(head==NULL||head->next==NULL){
        return head;
    }
    Node*last = NULL;
    Node*curr=head;
    while(curr!=NULL){
       last = curr->prev;
       curr->prev = curr->next;
       curr->next = last;
       curr = curr->prev;
    }
    return last->prev;
}