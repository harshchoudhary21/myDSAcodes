#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};
Node*oddndEven(Node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    vector<int>ans;
    Node*temp=head;
    while(temp!=NULL&&temp->next!=NULL){
        ans.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp!=NULL){
        ans.push_back(temp->data);
    }
    temp = head->next;
     while(temp!=NULL&&temp->next!=NULL){
        ans.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp!=NULL){
        ans.push_back(temp->data);
    }
    temp = head;
    int i = 0;
    while(temp!=NULL){
        temp->data = ans[i];
        i++;
        temp=temp->next;
    }
    return head;


}
Node*oddEven(Node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*odd = head;
    Node*even = head->next;
    Node*evenHead = head->next;
    while(even!=NULL&&even->next!=NULL){
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next->next;
        odd->next = evenHead;

    }
    return head;

}