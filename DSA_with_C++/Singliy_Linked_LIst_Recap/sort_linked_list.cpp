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
 void insert_tail(Node *&head, Node *&tail, int val)
 {
    Node* newNode= new Node(val);
    if(head ==NULL)
    {
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
 }

int main()
{
    Node* head=NULL;
    Node* tail= NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val== -1) 
            break;
        insert_tail(head,tail,val);

    }
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next; j!=NULL;j=j->next)
        {
            // for descending 
            //  if(i->val < j->val)

            
            // ascending order sort
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print_linked_List(head);

    
    return 0;
}