#include<iostream>

#include "lists.cpp"


using namespace std;

int main()
{
    Node node;
    node.append(5);
    node.print();
    node.append(10);
    node.print();
    node.append(15);
    node.print();
    node.append(20);
    node.print();
    node.append(5);
    node.print();
    //node.removelist();
    //node.print();
    node.append(50);
    node.print();
    node.removeduplicate();
    node.print();
    
}