#ifndef LINK_H
#define LINK_H


class Node{
     
    public:
        int data;
        void print();
        void append(int x);
        void removelist();
        int countlist();
        void reverselist();
        void removeduplicate();
        void removen(int x);

       // Node(int val=0);
        Node *next;
        Node *head=NULL;
    
};
#endif