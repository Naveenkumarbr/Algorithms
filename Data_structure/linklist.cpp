#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l1; //list declaration
    
    list<int> l2(4,100);//list assignment with 4 100 values
    
    list<int> l3(l2.begin(),l2.end());//list l2 is copied to l3
    
    list<int> l4=l3;//copy l3 to l4
    
    int arr[]={1,2,32,3,3,3,5,95,8,5,6,54};
    
    list<int> l5(arr,arr+sizeof(arr)/sizeof(*arr));//assigning values to lists from array
    
    
    //printing values of list
    list<int>::iterator itr=l5.begin();
    list<int>::iterator itrend=l5.end();
    for(list<int>::iterator tempitr=itr;tempitr!=itrend;tempitr++)
        cout<<*tempitr<<" ";
    
    cout<<endl;
        
    //assignment operator
    list<int>l6=l2;
    //assigning values
    list<int>l7;
    l7.assign(6,100);//assigning with 6 100 values
    
    list<int> linklist;
    //insert operator for list
    for(int i=0;i<5;i++)
        linklist.push_back(i);     //1 2 3 4 5 
    
    list<int>::iterator it=linklist.begin();
    ++it;
    
    //linklist insert operation to the position where v want it to be
    linklist.insert(it,10);
    
    linklist.push_front(4);//insert in the first position
    
    for(auto i=linklist.begin();i!=linklist.end();i++)
        cout<<*i<<" ";
    
    linklist.pop_front();
    cout<<"\n"<<linklist.front();
    cout<<"\n"<<linklist.back();
    
    /*
    front();
    push_front();
    pop_back();
    back();
    */
    
    linklist.erase(linklist.begin(),linklist.end());
    
    for(auto i=linklist.begin();i!=linklist.end();i++)
        cout<<*i<<endl;
    
}