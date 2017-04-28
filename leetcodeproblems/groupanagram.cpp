#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs);

int main()
{
    vector<string> strs={"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> res=groupAnagrams(strs);
    cout<<"Done";
}

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> result;
    map<string, vector<string>> m;
    
    for(int i=0;i<strs.size();i++)
    {
        string tmpstr=strs[i];
        sort(tmpstr.begin(),tmpstr.end());
        if(m.find(tmpstr)!=m.end())
            m[tmpstr].push_back(strs[i]);
        else
            m[tmpstr]=vector<string>({strs[i]});
    }
    
    for(auto i=m.begin();i!=m.end();i++)
    {
        result.push_back(i->second);
    }
    return result;
    
}


