#include<iostream>

using namespace std;

int insert(int n, int m, int i, int j);
void printbin( int num);
int main()
{
     int N=21324567;
    // int M=123;
    int M=23452343;
    printbin(N);
    printbin(M);
   insert(N,M,4,20);
   // cout<<insert(N,M,2,6);
}

int insert(int n, int m, int i, int j)
{
    int mask=1;
    
    //create mask from j to i with 1s
    mask=((mask<<(j-i+1))-1)<<i-1;
    //copy the values from m through mask
    m = m & mask;
    
    
    printbin(mask);
    printbin(m);
    printbin(n);
    
    //remove any values from n from i to j by neg mask and ANDing with n
    mask=~mask;
    n=n & mask;
    
    
    printbin(mask);
    printbin(n);
    
    //now put values from m to n by just xoring
    n=n^m;
    printbin(n);
    
    
}
void printbin( int num)
{
    int mask=1;
    for(int i=31;i>=0;i--)
        cout<<((num & (mask << i))>0)?'1':'0';
    cout<<endl;
}


