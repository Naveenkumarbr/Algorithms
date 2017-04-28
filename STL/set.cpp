#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> myset;
    myset.insert(5);
    myset.insert(1);
    myset.insert(0);
    
    set<int>::iterator itrstart=myset.begin();
    set<int>::iterator itrend=myset.end();
    
    for(set<int>::iterator itr=itrstart; itr!=itrend;itr++)
        cout<<*itr<<" ";
}