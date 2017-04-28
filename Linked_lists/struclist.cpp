#include<iostream>


using namespace std;


struct Node{
    int data;
    
    Node *next;
};


Node *insert(Node *head, int x)
{
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
        
    }
    return head;
}

void print(Node *head)
{
    Node *temp=head;
    if(head==NULL){
        cout<<"nothing to print";
        return;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    
}

int main()
{
    Node *head=NULL;
    head=insert(head,5);
    head=insert(head,30);
    head=insert(head,5);
    head=insert(head,30);
    
    head=insert(head,5);
    head=insert(head,30);
    
    print(head);
}