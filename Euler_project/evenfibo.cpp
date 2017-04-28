#include<iostream>

using namespace std;
int main()
{
    long num=1000;
    long count1=1,count2=1,sum=0;
    while(count2<4000000)
    {
        if(count2%2==0)
                sum+=count2;
        long temp=count2;
        count2=count1+count2;
              
        count1=temp;
    }
    cout<<sum;
}
