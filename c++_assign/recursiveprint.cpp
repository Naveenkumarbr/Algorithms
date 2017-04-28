#include<iostream>

using namespace std;


void recursive(int n);

int main()
{
    recursive(55768);
}

void recursive(int n)
{
   /* if(n<=0)
    {
        return;
    }
    cout<<n%10<<endl;
    recursive(n/10);*/
    
    if(n>=10)
        recursive(n/10);
    cout<<n%10<<endl;
    
}