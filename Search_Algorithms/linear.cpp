#include <iostream>
#include <stdio.h>


using namespace std;

bool search(int key, int arr[], int len);

int main()
{
   int list[]={3,3,2,5,2,6,1,7,8,9};
  
   int len=sizeof(list)/sizeof(*list);
  // array<int,10> list={3,3,2,5,2,6,1,7,8,9};
    if(search(5,list,len))
        cout<<"The key is present";
    else 
        cout<<"The key is not present";
    
}

bool search(int key, int arr[], int len)
{
  
    for(int i=0;i<len;i++)
    {
        if(key==arr[i])
            return true;
    }
    return false;
}