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
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node* temp= head;

    while(temp->next != NULL){
        temp=temp->next;
    }
    //now temp is last node 
    temp->next = newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;;
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

 void insert_at_Position(Node* head, int pos, int v)
 {
    Node* newNode = new Node(v);
    Node* temp = head ;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next= temp->next;
    temp->next= newNode;
    cout<<endl<<endl<<"Inserted at position at"<<pos<<endl;
 }
 void insert_at_head(Node *&head, int v)
 {
    Node* newNode= new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head"<<endl;
 }
 void  delete_from_position(Node *head, int pos)
 {
    Node* temp= head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    Node* deleteNode =temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<"deleted Position"<<pos<<endl;
 }
 void delete_head(Node* &head){
    Node* deleteNode = head;
    head=head->next;
    delete deleteNode;
    cout<<endl<<"Deleted head"<<endl<<endl;
 }

int main()
{
    Node* head=NULL;

while(true){
    cout<<"Option 1: insert at tail"<<endl;
    cout<<"Option 2: print linked list "<<endl;
    cout<<"Option 3: Insert at any position "<<endl;
    cout<<"Option 4: Insert at head "<<endl;

    cout<<"Option 5: Delete at any position "<<endl;
    cout<<"Option 6: Delete head"<<endl; 
    cout<<"Option 7: Terminate "<<endl;
    int op;
    cin>>op;

    if(op==1){
        cout<<"Enter your value: ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2){
        print_linked_list(head);
    }
    else if(op==3){
        int pos,v;
        cout<<"Enter position:";
        cin>>pos;
        cout<<"Enter value";
        cin>>v;
        if(pos==0){
            insert_at_head(head,v);
        }
      else{
        insert_at_Position(head,pos,v);
      }
    }
    else if(op==4){
        int v;
        cout<<"Enter Value: ";
        cin>>v; 
        insert_at_head(head,v);
    }
    else if(op==5){
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            if(pos == 0){
                delete_head(head);
            }
            else {
                delete_from_position(head,pos);
            }
    }
    else if(op==6){
        delete_head(head);
    }
    else if(op==7){
        break;
    }
}
   

    
    return 0;
}