#include<iostream>

using namespace std;

int length(int x);
int convertmin(int x, int len);
int convertmax(int x, int len);


int main()
{
    int x1=555;
    int x2=666;
    int max,min;
    int len1=length(x1);
    int len2=length(x2);
    cout<<"The minimum value is :"<<convertmin(x1,len1)+convertmin(x2,len2)<<"\n";
    cout<<"The maximum value is :"<<convertmax(x1,len1)+convertmax(x2,len2);
    
    
}


int length(int x)
{
    int cnt=0;
    while(x!=0)
    {
        x=x/10;
        cnt++;
    }
    return cnt;
}

int convertmin(int x, int len)
{
    int temp=x,val,testval=0;
    while(temp!=0)
    {
        int chk=1;
        for(int i=0;i<len-1;i++)
        {
            chk=chk*10;
        }
        temp=temp%chk;
        val=x-temp;
        x=temp;
        if(val==(6*chk))
            val=5*chk;
        testval=testval+val;
       
        len--;
    }
    return testval;
}

int convertmax(int x, int len)
{
    int temp=x,val,testval=0;
    while(temp!=0)
    {
        int chk=1;
        for(int i=0;i<len-1;i++)
        {
            chk=chk*10;
        }
        temp=temp%chk;
        val=x-temp;
        x=temp;
        if(val==(5*chk))
            val=6*chk;
        testval=testval+val;
       
        len--;
    }
    return testval;
}