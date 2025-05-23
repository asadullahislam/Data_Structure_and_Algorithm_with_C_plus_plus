#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void print_recursion(Node* n)
{
    if(n==NULL){
        return;
    }
    cout<<n->val<<" ";
    print_recursion(n->next);
}

void reverse(Node* &head,Node *cur)
{
    if(cur->next ==NULL)
    {
        head=cur;
        return ;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}


int main()
{

    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    Node* tail=d;
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    reverse(head,head);
    print_recursion(head);
  
    
    return 0;
}