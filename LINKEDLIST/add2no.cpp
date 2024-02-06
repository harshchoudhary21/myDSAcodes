#include<bits/stdc++.h>
using namespace std;
class Node{
   
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    };


Node*add2No(Node*head1,Node*head2){
    Node*t1 = head1;
    Node*t2 = head2;
    Node*dummy = new Node(-1);
    Node*current = dummy;
    int carry = 0;
    while(t1!=NULL||t2!=NULL){
        int sum = carry;
        if(t1!=NULL){
            sum = sum+t1->data;
        }
         if(t2!=NULL){
            sum = sum+t2->data;
        }
        Node*newNode = new Node(sum%10);
        carry = sum/10;
        current->next = newNode;
        current = current->next;
        if(t1!=NULL){
            t1 = t1->next;
        }
         if(t2!=NULL){
            t2 = t2->next;
        }
    }
    if(carry){
        Node*newNode = new Node(carry);
        current->next = newNode;
    }
    return dummy->next;

}