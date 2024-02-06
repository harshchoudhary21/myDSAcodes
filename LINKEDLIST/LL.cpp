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

Node* convertarr2ll(vector<int>& arr) {
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head; 
}
int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
bool checkElementInLL(Node*head,int val){
    Node*temp = head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertarr2ll(arr); 
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    int length = lengthofLL(head);
    cout<<length<<endl;
    cout<<checkElementInLL(head,3)<<endl;


    
}