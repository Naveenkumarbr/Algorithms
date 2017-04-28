#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int insertchar(string str1, string str2);
int deletechar(string str1, string str2);
int replacechar(string str1, string str2);


int main()
{
    string str1="bale";
    string str2="pake";
    
    int count=0;
    cout<<insertchar(str1,str2)<<"\t"<<deletechar(str1,str2)<<"\t"<<replacechar(str1,str2)<<endl;
    count+=insertchar(str1,str2)+deletechar(str1,str2)+replacechar(str1,str2);
    
    if(count==1)
        cout<<"The strings are one edit away";
    else
        cout<<"Sorry the strings are not one edit away";
    return 0;
    
}

int insertchar(string str1, string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    int len1=str1.length();
    int len2=str2.length();
    if(len1!=len2-1)
        return 0;
    else
    {
        //int len
        int len=(len1<len2)?len1:len2;
        bool flag=true;
        int j=0;
        for(int i=0;i<len;i++)
        {
            if(str2[i]!=str1[j++])
            {
               if(flag==true)
               {
                 j--;
                 flag=false;
               }
                else
                 return 0;
            }
        }
        return 1;
    }
}
int deletechar(string str1, string str2)
{
   sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
   
    int len1=str1.length();
    int len2=str2.length();
    if(len1!=len2+1)
        return 0;
    else
    {
        int len=(len1<len2)?len1:len2;
        bool flag=true;
        int j=0;
        for(int i=0;i<len;i++)
        {
            if(str1[i]!=str2[j++])
            {
               if(flag==true)
               {
                 j--;
                 flag=false;
               }
                else
                 return 0;
            }
        }
        return 1;
    }
}
int replacechar(string str1, string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
   
    int len1=str1.length();
    int len2=str2.length();
    if(len1!=len2)
        return 0;
    else
    {
        int len=len2;
        bool flag=true;
        int j=0;
        for(int i=0;i<len;i++)
        {
            if(str1[i]!=str2[j++])
            {
               if(flag==true)
               {
                 j--;
                 flag=false;
               }
                else
                 return 0;
            }
        }
        return 1;
    }
}