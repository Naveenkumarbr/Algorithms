#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
 NODE *head,*curr,*temp=NULL;

int insertFirst(int key)
{
     temp=(NODE*)malloc(sizeof(NODE));
     temp->data=key;
     temp->next=NULL;
     head=temp;
    return 0;
}

void insertkey(int key){
    curr=head;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->data=key;
    temp->next=NULL;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
}

void printkey(){
    if(head==NULL)
        printf("Nothing is present");
    else{
        curr=head;
        printf("%d\n",curr->data);
        while(curr->next!=NULL){
            curr=curr->next;
            printf("%d\n",curr->data);
            
        }
    }
}

void deleteFirst()
{
    curr=head->next;
    head=curr;
}

void deletelink(int link)
{
    curr=head;
    NODE *prev, *other=NULL;
    for(int i=0;i<link;i++)
    {
        prev=curr;
        curr=curr->next;
        other=curr->next;
        
    }
    prev->next=other;
    
}

int listlength()
{
    int cnt=0;
    curr=head;
    while(curr->next!=NULL){
        cnt++;
        curr=curr->next;
    }
        
    return cnt+1;
}

int search(int key)
{
   
    curr=head;
    
  //  int len=listlength();
    int i=1;
    while(curr->next!=NULL)
    {
        int chk=curr->data;
        if(chk==key)
           return i;
            
        else
            curr=curr->next;
        
    }
   return 0;
    
}

int main(){
    insertFirst(5);
    insertkey(10);
    insertkey(20);
    insertkey(30);
    insertkey(40);
    printkey();
    deletelink(3);
    printkey();
    
    if(search(30))
        printf("Found the key");
    else
        printf("The key is not there in linked list");
    
    
   //printf("Enter a value to be entered: \n");
   // scanf("%d",&head->data);
    
   // printf("\n%d",head->data);
    return 0;
}