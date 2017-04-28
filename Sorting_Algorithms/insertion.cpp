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
   int holeposition,value;
    for(int i=0;i<len;i++)
    {
        holeposition=i;
        value=arr[i];
        while(holeposition>0 && arr[holeposition-1]>value)
        {
            int temp=arr[holeposition];
            arr[holeposition]=arr[holeposition-1];
            arr[holeposition-1]=temp;
            holeposition=holeposition-1;
        }
        arr[holeposition]=value;
    }
    cout<<"\n"<<"The sorted array"<<endl;
    print(arr,len);
}