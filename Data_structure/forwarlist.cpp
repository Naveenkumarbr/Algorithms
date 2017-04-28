#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> l1;
    
    l1.assign(4,15);//assigns 4 15's in the list
    forward_list<int> l2;
    l2=l1;//alternative l2.assign(l1.begin(),l1.end());
    
    for(auto i=l2.begin();i!=l2.end();i++)
        cout<<*i<<" ";
        
    l1.push_front(15);
    l2.pop_front();
    
    
}