#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

string palenPrint(string str);
void printstring(string str);
void permute(string str);
bool palendrome(string str);

int main()
{
    
    string str="tactcoa";
   str= palenPrint(str);
    if(palendrome(str))
    {
        cout<<"palendrome"<<endl;
        cout<<str<<endl;
        permute(str);
    }
    else
        cout<<"not a palendrome";
  
    
}



string palenPrint(string str)
{
      int last=str.length()-1;
    for(auto i=0;i<str.length()/2;i++)
    {
      
        int cnt=1;
        char temp=str[i];
        for(auto j=i+1;j<str.length();j++)
        {
            if(temp==str[j])
            {
                cnt++;
                char tempchar=str[last];
                str[last]=str[j];
                str[j]=tempchar;
                last--;
                break;
            }
        }
      /*  if(cnt!=2)
            return false;*/
    }
   return str;
    
}

bool palendrome(string str)
{
    int len=str.length();
    int j=len-1;
    int i=0;
    while(i<=j)
    {
        if(str[i++]!=str[j--])
            return false;
            
    }
    return true;
}

void print(string str)
{
    cout<<str;
}

void permute(string str)
{
    int len=str.length();
    
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
        string tempstr=palenPrint(str);
        if(palendrome(tempstr))
            cout<<tempstr<<endl;
    }
}


