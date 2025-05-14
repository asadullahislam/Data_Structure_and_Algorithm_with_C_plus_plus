#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void normal_print(Node* head)
{
    Node* tmp= head;
    while(tmp !=NULL)
    {
       cout<<tmp->val<<" ";
       tmp=tmp->next; 
    }
   cout<<endl;

}
void reverse_print(Node* tail)
{
    Node* tmp=tail;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

void insert_at_position(Node* head, int pos, int val)
{
    Node* tmp = head;
    Node* newNode= new Node(val);

    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
     newNode->next=tmp->next;
     tmp->next=newNode;
     newNode->prev=tmp;
     newNode->next->prev=newNode;
}

int size(Node* head)
{
    Node* tmp = head;
    int count=0;
    while(tmp!= NULL)
    {
        count++;
        tmp=tmp->next;
    }
    cout<<"Count is :"<<count<<endl;
    return count;
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail =d;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;  
    c->next=d;
    d->prev=c;
    

    int pos,val;
    cin>>pos>>val;
    if(pos>=size(head)){
        cout<<"Invalid"<<endl;
    }
    else{
        insert_at_position(head,pos,val);
    }

    normal_print(head);
    reverse_print(tail);
    cout<<endl;
   


    normal_print(head);
    reverse_print(tail);
    return 0;
}