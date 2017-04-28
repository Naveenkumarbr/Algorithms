#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string compress(string str);


int main()
{
    string str="naveen";
    
    cout<<compress(str);
    return 0;
}

string compress(string str)
{
    string temp="";
    sort(str.begin(),str.end());
    int cnt=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==str[i+1])
        {
            cnt++;
            continue;
        }
        
        temp+=str[i]+to_string(cnt);
        cnt=1;
        
    }
  //  cout<<temp;
    return temp;

}