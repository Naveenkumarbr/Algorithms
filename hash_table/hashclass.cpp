#include<iostream>
#include<string>

#include "hashmain.h"

using namespace std;


hashmain::hashmain()
{
    for(int i=0;i<tableSize;i++)
    {
        HashTable[i]=new item;
        HashTable[i]->name="Empty";
        HashTable[i]->drink="Empty";
        HashTable[i]->next=NULL;
    }
    
}

int hashmain::Hash(string key)
{
    int hashval=0;
    for(int i=0;i<key.length();i++)
    {
        hashval=hashval+key[i];
    }
    hashval=hashval%tableSize;
    
    return hashval;
}

//Print hash values
void hashmain::printHash(int index)
{
    item *temp=new item;
    temp=HashTable[index];
    while(temp!=NULL)
    {
        cout<<temp->name<<endl;
        cout<<temp->drink<<endl;
        temp=temp->next;
    }
}

 void hashmain::insertHash(string name, string drink)
 {
     item *check;
     item *temp=new item;
     int index=Hash(name);
     
     temp->name=name;
     
     
     temp->drink=drink;
     temp->next=NULL;
    
     
     while(HashTable[index]->next!=NULL)
        HashTable[index]=HashTable[index]->next;
    HashTable[index]->next=temp;
    printHash(index);
 }
 
 void hashmain::hashDelete(string name)
 {
     int index=Hash(name);
     printHash(index);
        if(HashTable[index]->name=="Empty")
        {
            cout<<"Sorry the name is not in our directory";
            return;
        }
        if(HashTable[index]->name==name)
        {
            HashTable[index]->name="Empty";
            HashTable[index]->drink="Empty";
            return;
        }
     
     else
     {
         item *ptr=HashTable[index];
         
         if(ptr->next!=NULL)
         {
            
           if(ptr->next->name==name)
           {
               if(ptr->next->next!=NULL)
                ptr->next=ptr->next->next;
               else
                ptr->next=NULL;
           }
         }
        
     }
     printHash(index);
 }
 
 
 
 int hashmain::numOfItems(int index)
 {
     int count=0;
     if(HashTable[index]->name=="Empty")
        return count;
     else
     {
         count++;
         item *ptr=HashTable[index];
         while(ptr->next!=NULL)
         {
             count++;
             ptr=ptr->next;
         }
     }
     return count;
 }
