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
    //base case
    if(n==NULL) return;
    cout<<n->val<<" ";
    print_recursion(n->next);
}
int main()
{
    Node* head = new Node(5);
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* tail= new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=tail; 
    print_recursion(head);
    
    return 0;
}