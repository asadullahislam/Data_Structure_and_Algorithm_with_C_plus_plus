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



int main()
{

    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
 
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    Node* slow= head;
    Node* fast= head;
    bool flag= false;
    while(fast !=NULL && fast->next !=NULL)
    {

        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast)
        {
           flag=true;
            break;
        }
    }
    if(flag== true)
    {
        cout<<"Cycle detected"<<endl;
    }
    else{
        cout<<"No cycle "<<endl;
    }
  
    return 0;
}