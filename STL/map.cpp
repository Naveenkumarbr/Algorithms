#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<char,int>mymap;
    mymap.insert(pair<char,int>('a',100));
    mymap.insert(make_pair('z',200));
    map<char,int>::iterator it=mymap.begin();
    mymap.insert(make_pair('b',150));
    mymap.insert(pair<char,int>('c',400));
    for(map<char,int>::iterator itr=it;itr!=mymap.end();itr++)
        cout<<(*itr).first<<"=>"<<(*itr).second<<endl;
    
}