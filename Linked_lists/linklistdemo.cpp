#include<iostream>

using namespace std;

class node
{
    int data;
    node *next;
};
 node *head,*curr;
 head=NULL;

class linklist()
{
   
    void insertlink();
    void printlink();
    //void removelink();
    //getlink();
    //searchdata();
};

void linklist::insertlink(int val)
{
    curr=head;
    node *temp;
    temp->data=val;
    temp->next=NULL;
    if(head=NULL)
      head=temp;
    else
    {
      while(curr->next==NULL)
        curr=curr->next;
      curr->next=temp;
    }
  
    
};

void linklist::printlink()
{
  curr=head;
  if(curr==NULL)
    cout<<"Nothing is present in linkedlist"<<endl;
  else
  {
     while(curr->next==NULL)
     {
        cout<<curr->data;
        curr=curr->next;
     }
    cout<<curr->data;
  }
}


int main()
{
    linklist list;
    list.insertlink(5);
    list.printlink();
  
    return 0;
}