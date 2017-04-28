#include <iostream>

using namespace std;
int main()
{
    long num=600851475143 ,large;bool flag=false;
    for(long i=2;i<num;i++)
    {
        if(num%i==0)
        {
            for(long j=2;j<i;j++)
            {
                if(i%j!=0)
                    flag=true;
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            cout<<i<<endl;
        }
        
    }
   
}