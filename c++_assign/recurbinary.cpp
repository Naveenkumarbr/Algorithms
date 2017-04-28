#include<iostream>

using namespace std;
const int key=6;

bool binary(int arr[],int first, int last);
void sort(int *arr, int len);
void print(int *arr, int len);

int main()
{
    const int len=20;
  //int arr[len]={1,2,3,4,5};
    int arr[len];
    srand(time(NULL));
    
    for(int i=0;i<len;i++)
        arr[i]=rand()%len+1;
    print(arr,len);
    sort(arr,len);
    print(arr,len);
    if(binary(arr, 0, len-1))
        cout<<"Found";
    else
        cout<<"not found";
    
}

bool binary(int arr[], int first, int last)
{
    int mid=(first+last)/2;
    if(first>=last)
        return false;
    else if(arr[mid]==key)
        return true;
    else if(arr[mid]<key)
        return binary(arr,mid+1,last);
    else
        return binary(arr,0, mid-1);
   
}


//selection sort
void sort(int *arr,int len)
{
    int index=0;
    for(int i=0;i<len;i++)
    {
        int min=arr[i];
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]<min)
            {
               min=arr[j];
               index=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=min;
        arr[index]=temp;
    }
}


void print(int *arr, int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}