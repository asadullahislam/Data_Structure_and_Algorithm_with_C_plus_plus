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

void insert_tail(Node *&head,Node *&tail, int val)
{
    Node* newNode= new Node(val);
    if(head ==NULL)
    {
        head=newNode;
        tail= newNode;
    }
    tail->next=newNode;
    tail=newNode;

}
void print_linked_list(Node *head)
{
    Node* temp = head;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

 void reverse_list(Node *n)
 {
    if(n==NULL) return ;
   
    reverse_list(n->next);
    cout<<n->val<<" ";
 }

int main() 
{
    Node* head1 =NULL;
    Node* tail1= NULL;

        int v1;
        while(true)
        { 
            cin>>v1;
            if(v1==-1){
              break;
            }
            insert_tail(head1,tail1,v1);
        }
        reverse_list(head1);


  
    
    return 0;
}