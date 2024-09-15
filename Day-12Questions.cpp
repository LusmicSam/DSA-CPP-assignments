// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40

// sir jo dono ek sath kr lete ha
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
    
};
void insertAtTail(node*&head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}
void insertAtAny(node*&head,int val,int pos){
    node *temp=head;
    for(int i=0;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    node *n=new node(val);
    n->next=temp->next;
    temp->next=n;
    
}
void display(node*head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    node*head=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        insertAtTail(head,x);
    }
    display(head);
    char p;
    int pos;
    cin>>p>>pos;
    insertAtAny(head,p,pos);
    
    display(head);
    
}
