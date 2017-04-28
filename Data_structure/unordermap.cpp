#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std;

int main()
{
    //different inserting ways into unordered map
    
    
    unordered_map<string,double> myrecipe,mypantry={{"milk",20},{"flour",50}};//two variables myrecipe and mypantry
    
    //making a pair of values
    pair<string, double>myshopping ("baking powder",33.22);
    
    myrecipe.insert(myshopping);//making pair externally and inserting the value into the unordered_map
    myrecipe.insert(make_pair<string, double>("eggs",22.23));
    myrecipe.insert(mypantry.begin(),mypantry.end());
    myrecipe.insert({{"sugar",0.3},{"apple",11.23}});
    
    
    //for accessing the values within the unordered map
    unordered_map<string, double>::iterator itr=myrecipe.begin();
    
    
    
    //accessing different values within the unordered_map
    
    for(auto i=itr;i!=myrecipe.end();i++)
     cout<<i->first<<"=>"<<(*i).second<<endl;
    for(auto& x:myrecipe)
        cout<<x.first<<"->"<<x.second<<endl;
   
   
   unordered_map<char,list<int>> mymap;
   
   mymap['a'].push_back(10);
   mymap['a'].push_back(100);
   mymap['a'].push_back(200);
   
   list<int> vec;
   
   for(auto i=mymap.begin();i!=mymap.end();i++)
   {
      vec=(i->second);
      cout<<(*i).first<<"=>";
      for(auto j=vec.begin();j!=vec.end();j++)
        cout<<*j<<" ";
   }
        

}