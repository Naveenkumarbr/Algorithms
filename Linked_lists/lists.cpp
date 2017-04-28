#include<iostream>
#include "link.h"

using namespace std;



void Node::append(int x)
{
    Node *temp=new Node();
    temp->data=x;
    temp->next=NULL;
    Node *curr=head;
    if(curr==NULL)
        head=temp;
    else
    {
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
    }
}

void Node::print()
{
    Node *curr=head;
    if(curr==NULL)
        cout<<"There is no lists in linked list"<<endl;
    else
    {
        cout<<curr->data<<"->";
        while(curr->next!=NULL)
        {
           curr=curr->next;
            cout<<curr->data<<"->";
        }
        cout<<"NULL"<<endl;
        
    }
}

void Node::removelist()
{
    Node *curr=head;
    if(curr==NULL)
            cout<<"There is nothing to remove"<<endl;
            
    else if(curr->next!=NULL)
    {
       int len=countlist();
       for(int i=0;i<len-2;i++)
        curr=curr->next;
       Node *temp=curr->next;
       curr->next=NULL;
       delete(temp);
    }
    else
    {
        delete(curr);
        head=NULL;
    }
}

void Node::removen(int x)
{
    Node *temp=head;
    for(int i=0;i<x;i++)
    {
        temp=temp->next;
    }
    Node *del=temp->next;
    temp->data=del->data;
    temp->next=del->next;
   
    delete del;
  
    
}


int Node::countlist()
{
    Node *curr=head;
    int cnt=0;
    while(curr!=NULL)
     {  
         cnt++;
         curr=curr->next;
     }
    return cnt;
}

void Node::removeduplicate()
{
    int len=countlist();
    if(len==0)
        return;
   
    for(int i=0;i<1;i++)
    {
         Node *temp=head;
         int k=i;int num;
        while(k>=0)
        {
        num=temp->data;
        temp=temp->next;
        k--;
        }
        
        for(int j=i+1;j<len;j++)
        {
             if(num==temp->data)
                removen(j++);
            if(j==len-1)
                break;
             temp=temp->next; 
             
        }
      
    }
    
}