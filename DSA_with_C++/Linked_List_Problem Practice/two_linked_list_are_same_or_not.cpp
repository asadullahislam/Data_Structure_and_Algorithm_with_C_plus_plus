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

int size_List(Node *head)
{
    Node* temp= head;
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

   Node* head2 =NULL;
   Node* tail2= NULL;

       int v2;
       while(true)
       {
           cin>>v2;
           if(v2==-1){
             break;
           }
           insert_tail(head2,tail2,v2);
       }
   
  int size1= size_List(head1);

  int size2= size_List(head2);
    if(size1 == size2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}