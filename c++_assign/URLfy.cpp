#include<iostream>
#include<string>



using namespace std;

string URL(string str);

int main()
{
    string str="                             Hello                      my name is Naveen                    ";
    
   
        cout<<URL(str);
   
}


string URL(string str)
{
    int len=str.length();
    string temp="";
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ' && str[i+1]!=' ' || str[i]==' ' && str[i+1]!=' ')
        temp+=str[i];
    }
    
    
    for(auto i=0;i<temp.length();i++)
        {
            if(temp[i]==' ')
                temp.replace(i,1,"%20");
        }
        
    return temp;
}