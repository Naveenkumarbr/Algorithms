#include<iostream>

using namespace std;
string toString(double num);
int main()
{
    double num=0.125;
    
    cout<<toString(num);
}

string toString(double num)
{
    string temp="0.";
    int cnt=32;
    while(num>0 && cnt>0)
    {
        int tempnum=num*10;
        for(int i=3;i>=0;i--)
            {
                if((tempnum & (1<<i))>0)
                    temp+="1";
                else
                    temp+="0";
            }
        double sample = num*10;
        int del=(int)sample;
        num=sample-del;
        cnt--;
    }
    if(cnt==0)
        return "Error";
    
    return temp;
}