#include<iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    const static int N=10;
    for(int j=0;j<N;j++)
    {
    for(int i=0;i<N;i++)
    {
        int randval=rand()%4+1;
        cout<<"\t"<<randval;
    }
    
    cout<<"\n"; 
    }
   
}