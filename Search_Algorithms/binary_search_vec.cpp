#include<iostream>
#include<vector>

using namespace std;

bool search(int key, vector<int> &list);

int main()
{
    vector<int> list;
    for (int i=0;i<100;i++)
        list.push_back(i);
    
    if(search(0,list))
        cout<<"Key is found ";
    else
        cout<<"Sorry not found";

    return 0;    
}

bool search(int key, vector<int>&arr)
{
    int low=0,high=arr.size()-1,mid;
    
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