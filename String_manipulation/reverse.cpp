#include<iostream>
#include<string>

using namespace std;

string reversestr(string str, int len);

int main()
{
    string str="Hello";
    cout<<reversestr(str,str.length());
    return 0;
}

string reversestr(string str, int len)
{
    
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
        
    }
    return str;
}