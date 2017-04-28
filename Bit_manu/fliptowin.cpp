#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printbin(int num);
int main()
{
    int n=1775;
    
    printbin(n);
    int mask=1;
    int cnt=0;
    vector<int> vectemp;
    bool flag=false;
    
    for(int i=0; i<32; i++)
    {
        if(i>0 && i<31)
        {
          if(flag==false)
          {
            if( ((n & (mask<<(i-1)))>0) && ((n & (mask<<(i+1)))>0) && ((n & (mask<<i))<=0) )
             {   n=n|(n ^ mask<<i);
          
            flag=true;}
          }
            
        }
        
        if((n & (mask<<i))>0)
        {
            cnt++;
        }
        else if(cnt>0)
        {
            vectemp.push_back(cnt);
            cnt=0;
            flag=false;
            
        }
    }
    
    
    sort(vectemp.begin(),vectemp.end());
    cout<<vectemp.back();
    
}

void printbin( int num)
{
    int mask=1;
    for(int i=31;i>=0;i--)
        cout<<((num & (mask << i))>0)?'1':'0';
    cout<<endl;
}