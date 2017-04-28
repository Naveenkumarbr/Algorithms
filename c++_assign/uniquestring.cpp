#include<iostream>
#include<string>

using namespace std;


bool unique(string str);
int main()
{
    string str="hello";
    
    if(unique(str))
        cout<<"The string is unique";
    else
        cout<<"The String is not unique";
}

bool unique(string str)
{
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
                return false;
        }
    }
    return true;
}
