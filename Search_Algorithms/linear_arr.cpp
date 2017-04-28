#include <iostream>
#include <vector>

using namespace std;

bool search(int key, vector<int> &list);

int main()
{
    vector<int> list;
    
    for(int i=0;i<50;i++)
    list.push_back(i);
    vector<int>::iterator i;
    
    /*for(i=list.begin();i<list.end();i++)
    {
        cout<<*i<<"\t";
    }*/
    cout<<"\n";
   if(search(55,list))
    cout<<"Key is found";
   else
    cout<<"Sorry your key is not present";
    
    
}
bool search(int key, vector<int> &list)
{
    vector<int>::iterator i;
    for(i=list.begin();i<list.end();i++)
    {
        if(key==*i)
            return true;
    }
    return false;
}