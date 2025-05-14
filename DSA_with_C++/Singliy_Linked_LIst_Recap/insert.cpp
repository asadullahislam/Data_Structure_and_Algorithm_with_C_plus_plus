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
 void insert(Node* head, int pos , int val)
 {
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next= newNode;
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
 void insert_head(Node *&head ,int val)
 {
    Node* newNode=new Node(val);
    newNode->next=head;
     head= newNode;
    
 }
 void insert_tail(Node * &head, Node * &tail, int val)
 {
    Node* newNode=new Node(val);
    if(head==NULL){
        head= newNode;
        tail= newNode;
        return ;
    }
    tail->next= newNode;
    tail= newNode;
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
    cout<<"tail -> "<<tail->val<<endl;
    cout<<endl;
    int pos, val;
    cin>>pos>>val;
    if(pos ==0){
        insert_head(head,val);
    }
   else  if(pos>size(head))
    {
        cout<<"Invalid Index: "<<endl;
    }
    else if( pos==size(head)){
        insert_tail(head,tail,val);
    }
    else{
        insert(head,pos,val);
    }
    print_linked_List(head);

    cout<<"tail ->"<<tail->val<<endl;
  
    return 0;
}