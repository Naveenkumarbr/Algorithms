
#include<iostream>
#include<string>

using namespace std;
#ifndef HASH_H
#define HASH_H


class hashmain
{
    private:
    static const int tableSize=2;
    
    struct item{
        string name;
        string drink;
        item *next;
    };
    
    item *HashTable[tableSize];
    
    public:
    
    hashmain();
    int Hash(string key);
    void printHash(int index);
    void insertHash(string name, string drink);
    int numOfItems(int index);
    void hashDelete(string name);
    
    
};

#endif