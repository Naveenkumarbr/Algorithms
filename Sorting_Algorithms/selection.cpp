#include<iostream>

using namespace std;


void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"\t";
}
int main()
{
    int arr[20];
    int len=sizeof(arr)/sizeof(*arr);
    //generate random values
    srand(time(NULL));
    for(int i=0;i<len;i++)
    {
        arr[i]=rand()%10;
       
    }
  
   print(arr,len);
      int min=arr[0];
      int index;
    for(int i=0;i<=len-1;i++)
    {
        for(int j=i+1;j<=len-1;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                index=j;
            }

        }
        int temp=arr[i];
        arr[i]=min;
        arr[index]=temp;
        min=arr[i+1];
        
    }
    cout<<"\n"<<"The sorted array"<<endl;
    print(arr,len);
}