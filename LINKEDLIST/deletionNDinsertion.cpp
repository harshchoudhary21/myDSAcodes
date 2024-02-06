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
//Delete from beginning
Node*removesHead(Node*head){
    if(head==NULL){
        return head;
    }
    Node* temp = head;
    head=head->next;
    free(temp);
    return head;

}
//delete last element
Node*removesLast(Node*head){
    if(head == NULL||head->next==NULL){
        return NULL;
    }
    Node*temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
Node*deleteKth(Node*head,int k){
    if (head == NULL){
        return head;
    }
    if(k==1){
        removesHead(head);
    }
    int cnt = 0;
    Node*temp = head;
    Node*prev = NULL;
    while(temp){
        cnt++;
        if(cnt ==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node*deleteEl(Node*head,int el){
    if (head == NULL){
        return head;
    }
    if(head->data==el){
        removesHead(head);
    }
    
    Node*temp = head;
    Node*prev = NULL;
    while(temp){
       
        if(temp->data ==el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
//Inserting at headofLL
Node*insertionAtbegin(Node*head,int val){
    Node*temp = new Node(val,head);
    return temp;

}
Node*insertTail(Node*head, int val){
    if(head == NULL){
        return new Node(val,nullptr);
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node*newNode = new Node(val,nullptr);
    temp->next = newNode;
    return head;

}
Node*insertAtk(Node*head,int el,int k){
    if(head==NULL){
        if(k==1){
            insertionAtbegin(head,el);
        }else{
            return NULL;
        }
    }
    Node*temp = head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node*x = new Node(el,nullptr);
            x->next =  temp->next;
            temp->next = x;
        }
        temp = temp->next;

    }
    return head;
}
int main(){
     vector<int> arr = {2, 5, 8, 7};
     Node *head = convertarr2ll(arr); 

}