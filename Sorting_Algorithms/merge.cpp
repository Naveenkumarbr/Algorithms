#include<iostream>

using namespace std;
#define max 20
 int arr[max];
void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"\t";
}


void mergesort(int low, int mid, int high)
{
    int l1,l2,i;
    int res[high+1];
    for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++)
    {
        if(arr[l1]<=arr[l2])
            res[i]=arr[l1++];
        else
            res[i]=arr[l2++];
    }
    while(l1<=mid)
        res[i++]=arr[l1++];
    while(l2<=high)
        res[i++]=arr[l2++];
    for(i=low;i<=high;i++)
        arr[i]=res[i];
}

void merge(int low, int high)
{
    int mid;
    if(low<high){
    mid=(low+high)/2;
    merge(low,mid);
    merge(mid+1,high);
    mergesort(low,mid,high);
    }
    else
    return;
    
    
}

int main()
{
   
    int len=sizeof(arr)/sizeof(*arr);
    //generate random values
    srand(time(NULL));
    for(int i=0;i<len;i++)
    {
        arr[i]=rand()%10+1;
       
    }
  
   print(arr,len);
   merge(0,len-1);
    cout<<"\n"<<"The sorted array"<<endl;
    print(arr,len);
}