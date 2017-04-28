#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxsum(vector<int> &nums);

int main()
{
    vector<int> sample={-2,1,-3,4,-1,2,1,-5,4};
    
    cout<<maxsum(sample);
}

int maxsum(vector<int> &nums)
{
    int maximum=nums[0];
    int oldmax=nums[0];
    
    for(int i=1;i<nums.size();i++)
    {
        oldmax=max(nums[i]+oldmax,nums[i]);
        maximum=max(oldmax,maximum);
    }
    
    return maximum;
}