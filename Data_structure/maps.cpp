#include<iostream>
#include<map>




using namespace std;

int main()
{
    map<char,int> mymap;
    
    mymap['a']=10;
    mymap['b']=20;
    mymap['c']=30;
    mymap.at('a')=40;//used for changing the value within a map
    
    if(!mymap.empty())          //empty() is a inbuilt function for checking the map variables
        cout<<"Hi there this checks for empty map"<<endl;
    
    
    for(auto i=mymap.begin();i!=mymap.end();i++)
        cout<<i->first<<" "<<i->second<<endl;       //access the map variables in 
        
    
    
    
    
    //finding the value using iterator
    map<char,int>::iterator it;
    it=mymap.find('b');//this will return the iterator which will be pointing to the value of b
    
    mymap.erase(it);//we need to delete the value of b 
     for(auto i=mymap.begin();i!=mymap.end();i++)
        cout<<i->first<<" "<<i->second<<endl;  //b has been deleted
        
        
    //map insert operators
    
    mymap.insert(pair<char,int>('b',100));
    for(auto i=mymap.begin();i!=mymap.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
        
    //multimap can contain multiple entries of the same key
    multimap<char,int> multimymap;
    
    
    //multimap cannot be accessed with['a'] and assigning to a value
    //multimymap['a']=10; this cannot be done
    
    multimymap.insert (pair<char,int> ('a',10));
    multimymap.insert (pair<char,int> ('b',20));
    multimymap.insert (pair<char,int> ('b',30));//this is possible in multimap
    //using make_pair values can be added
    multimymap.insert (make_pair('b',50));
    
    //another way of accessing the values is
    multimap<char,int>::iterator itr=multimymap.begin();
    
    cout<<(*itr).second<<endl;//use this to display the second value
    
    
    
    for(auto i=multimymap.begin();i!=multimymap.end();i++)
        cout<<i->first<<"=>"<<i->second<<endl;
        
        
        
    //erase in multimap
    multimymap.erase(itr);
    
    //erase using key value
    multimymap.erase('b');
    
    
    cout<<(*itr).second<<" "<<endl;
    
    
    //find in multimap 
    
   multimap<char,int>::iterator itrtemp= multimymap.find('a');
   
   cout<<"Found"<<(*itrtemp).first<<" "<<itrtemp->second<<endl;
    
    
    
    
    
}