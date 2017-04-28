#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool perm(string str1, string str2);
int main()
{
    string str1="pale";
    string str2="pall";
    
    if(perm(str1,str2))
        cout<<"The strings are same";
    else
        cout<<"The strings are different";
    
}

bool perm(string str1, string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    if(str1==str2)
        return true;
    else
        return false;
}