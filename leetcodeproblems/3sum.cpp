#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<vector<int>> sum3(vector<int> &nums);
int main()
{
    vector<int> nums={1,-1,-1,0};
    
    vector<vector<int>> x = sum3(nums);
}

vector<vector<int>> sum3(vector<int>& nums) 
    {
        
       vector<vector<int>> result;
    vector<int> temp(3);
    sort(nums.begin(),nums.end());
    int len=nums.size();
    bool flag=false;
    
    for(int i=0;i<len-2;i++)
    {
        //temp.erase(temp.begin(),temp.end());
        int count=nums[i];
        temp[0]=count;
        
        for(int j=i+1;j<len-1;j++)
        {
            temp[1]=nums[j];
            for(int k=j+1;k<len;k++)
            {
            int cnttemp=nums[j]+nums[k];
            if((cnttemp+count)==0)
            {
                
                temp[2]=nums[k];
                //sort(temp.begin(),temp.end());
                if(find(result.begin(),result.end(),temp)!=result.end())
                    break;
                 else
                    result.push_back(temp);
            }
            }
        }
        
    }
   return result;
    }