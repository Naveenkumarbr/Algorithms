#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> sample;
    sample.push_back(4);
    sample.push_back(5);
    sample.push_back(6);
    
    
    //Iterator definitionand assignment
    vector<int>::iterator itr1=sample.begin();
    vector<int>::iterator itr2=sample.end();//points to one after the end of vector end
    
    //for loop iterator usage
    for(vector<int>::iterator itr=itr1;itr<itr2;itr++)
        cout<<*itr<<" ";
    
    cout<<endl;
        
    reverse_iterator<vector<int>::iterator> ritr;
    for(ritr=sample.rbegin();ritr!=sample.rend();ritr++)
        cout<<*ritr<<" ";

    
}