#include<iostream>
#define max 10

int arr[max];

using namespace std;

void quicksort(int start,int end);
void print();
int partition(int start,int end);

int main()
{
    //random number generation
    srand(time(NULL));
    
    for(int i=0;i<max;i++)
    {
        arr[i]=rand()%max+1;
    }
    cout<<"The unsorted array:"<<endl;
    print();//Print before sorting
    quicksort(0,max-1);//calling sorting function
    cout<<"The sorted array :"<<endl;
    print();//Print after sorting
    
    
}

void quicksort(int start, int end)
{
    if(start>=end)
        return;
    else
    {
        int pIndex=partition(start,end);
        quicksort(start,pIndex-1);
        quicksort(pIndex+1,end);
    }
    
}

int partition(int start, int end)
{
    int pIndex=start;
    int pivot=arr[end];
    
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            int temp=arr[pIndex];
            arr[pIndex]=arr[i];
            arr[i]=temp;
            pIndex++;
        }
        
    }
    
    arr[end]=arr[pIndex];
    arr[pIndex]=pivot;
    return pIndex;
}

void print()
{
    for(int i=0;i<max;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}