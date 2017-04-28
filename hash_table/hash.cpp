#include<iostream>
#include<string>
#include "hashmain.h"
#include "hashclass.cpp"


using namespace std;


int main()
{
    hashmain hashobj;
    hashobj.insertHash("naveen","wildturkey");
    hashobj.insertHash("naveen","wine");
    hashobj.insertHash("naveen","vodka");
    hashobj.insertHash("naveen","beer");
    cout<<endl;
    hashobj.hashDelete("naveen");
    
  
    
}