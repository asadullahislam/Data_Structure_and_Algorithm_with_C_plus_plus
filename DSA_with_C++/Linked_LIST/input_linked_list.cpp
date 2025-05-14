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
void insert_at_tail(Node *&head,int v){
    Node* newNode= new Node(v);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp= head;

    while(temp->next != NULL){
        temp=temp->next;
    }
    //now temp is last node 
    temp->next = newNode;
  
 }
 void print_linked_list(Node* head){
    cout<<endl;
    cout<<"Your Linked list is: ";
    Node* temp= head;
    while(temp !=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;;
    
 }

int main()
{
    int val;
    Node* head=NULL;
    while(true)
    {
            cin>>val;
            if(val == -1){
                break;
            }
            insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
} 

// time complexity 1->O(N)
//N-> O(N*N)