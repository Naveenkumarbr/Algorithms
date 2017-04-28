#include<iostream>

using namespace std;

bool search(int key, int arr[], int len);

int main()
{
    int arr[]={3,4,5,5,6,6,7,8,9,10,11,12,12,15,16};
    int len=sizeof(arr)/sizeof(*arr);
    if(search(100,arr,len))
        cout<<"Key is found ";
    else
        cout<<"Sorry not found";

    return 0;    
}

bool search(int key, int arr[], int len)
{
    int low=0,high=len-1,mid;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
            return true;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return false;
}