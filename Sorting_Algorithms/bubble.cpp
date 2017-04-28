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
        
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 int temp=arr[j+1];
                 arr[j+1]=arr[j];
                 arr[j]=temp;
            }
            

        }
        
    }
    cout<<"\n"<<"The sorted array"<<endl;
    print(arr,len);
}