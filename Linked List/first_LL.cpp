#include <bits/stdc++.h> 
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            this->data=d;
            this->next=NULL;
        }
};
void insertLL(Node* &head,int d){
    Node* add= new Node(d);
    if(head==NULL){
        head=add;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=add;

}
void insertAthead(Node* &head,int d){
    Node* add= new Node(d);
    add->next=head;
    head=add;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head= new Node(6);
    insertLL(head,9);
    printLL(head);
    insertAthead(head,10);
    printLL(head);
    return 0;
}