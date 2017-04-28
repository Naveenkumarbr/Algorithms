#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int maxprod(vector<int> &max);

int main()
{
    vector<int> nums={-2};
    cout<<maxprod(nums);
}


int maxprod(vector<int> &nums)
{
    int m1=1;
    int m2=1;
    int maximum=nums[0];
    
    for(int i=0;i<nums.size();i++)
    {
        m1=nums[i]*m1;
        m2=nums[nums.size()-i-1]*m2;
        
        maximum=max(maximum,max(m1,m2));
        
        if(m1==0)
            m1=1;
        if(m2==0)
            m2=1;
        
        
    }
    return maximum;
}


