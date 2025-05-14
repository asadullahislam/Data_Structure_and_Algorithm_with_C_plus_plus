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

void print_linked_List(Node* head)
{
   Node* temp= head;
   while(temp !=NULL)
   {
       cout<<temp->val<<" ";
       temp=temp->next;
   }
}
void delete_node(Node *head, int pos)
{
    Node *temp= head;
    for(int i=0;i<pos -1;i++)
    {
        temp=temp->next;
    }
    Node* deleteNode =temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node* deleteNode= head;
    head=head->next;
    delete deleteNode;
}
int size(Node *head)
{
   Node* temp =head;
   int count=0;
   while(temp !=NULL)
   {
       temp=temp->next;
       count++;
   }
   return count;
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
    print_linked_List(head);
cout<<endl;
    int pos;
    cin>>pos;
    if(pos>=size(head)){
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0){
        delete_head(head);
    }
    else{
        delete_node(head,pos);
    }
    delete_node(head,pos);
    print_linked_List(head);
    
    return 0;
}