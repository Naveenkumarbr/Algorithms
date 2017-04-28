#include<iostream>
#include<string>

using namespace std;

bool isSubstring(string str1, string str2);


int main()
{
    string str1="Hello";
    string str2="oHell";
    
    if(isSubstring(str1,str2))
        cout<<"The first string is substring of other";
    else
        cout<<"Sorry they are not substrings";
}



bool isSubstring(string str1, string str2)
{
    string temp;
    int j=0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]==str2[j])
        {
            j=i;
            break;
        }
        
    }
    
    int k=0;
    for(int i=j;i<str1.length();i++)
    {
        if(str1[i]!=str2[k])
            return false;
        k++;
    }
    
    for(int i=0;k<str2.length();i++)
    {
        if(str1[i]!=str2[k])
            return false;
        k++;
    }
    
    return true;
}