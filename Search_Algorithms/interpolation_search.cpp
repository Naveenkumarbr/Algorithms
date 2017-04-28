#include<iostream>

using namespace std;

bool search(int key, int *arr_ptr, int len);

int main()
{
    
    int arr[50];
    for(int i=1;i<=50;i++)
        arr[i]=i;
        
    int len=sizeof(arr)/sizeof(*arr);
    if(search(1,arr,len))
        cout<<"Key is found...";
    else
        cout<<"Sorry no key is found";
    
    return 0;
    
}

bool search(int key, int *arr, int len)
{
    int lo=0,hi=len-1,mid;
    
    while(lo<=hi)
    {
    mid=lo+(hi-lo)/(arr[hi]-arr[lo])*(key-arr[lo]);
    if(key==arr[mid])
        return true;
    else if(key>arr[mid])
        lo=mid+1;
    else
        hi=mid-1;
    
    }
    return false;
    
}