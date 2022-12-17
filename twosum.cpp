#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int> nums, int target) {
        
        //brute force approach T =O(n^2)
        int  n= nums.size();
        int sum =0;
        vector<int> ans ;
        for(int i=0 ;i<n; i++)
        {

            for(int j=0 ;j<n ;j++)
            {

                if(i!=j)
                {
                    sum = nums[i] +nums[j];

                    if(sum==target)
                    {
        
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;

                    }
                }
            }
        }

        
    }

//optimising using sorting 
     vector<int> twoSum2(vector<int> nums, int target) {

        vector<int> ans;
    int  n= nums.size();
        sort(nums.begin() ,nums.end());
        int temp;
        auto start = nums.begin();

        vector<int>::iterator it;

        for( int i=0 ;i<n;i++)
        {
            temp = target -nums[i];
            it =  find(nums.begin() , nums.end(), temp);
            if (it != nums.end())
            {
                int pos= distance(nums.begin(), it);
                ans.push_back(i);
                ans.push_back(pos);
                return ans;
            }
        
        }

     }

     vector<int> twoSum3(vector<int> nums, int target) {
         vector<int> ans;
        int  n= nums.size();
        unordered_map<int ,int>  s;

        for(int  i=0 ;i<n;i++)
        {
            int x = target-nums[i];
            if(s.find(x) != s.end())
            {
                ans.push_back(s[x]);
                ans.push_back(i);
                return ans;
            }

            s[nums[i]]=i;
        }

       return {} ; 
     }

int main()
{
    vector<int> arr= {10,5,2,3,-6,9,11};
    int s =4;
    vector<int> ans = twoSum3(arr ,s);

    for (int i : ans)
    {
         cout<<i<<" ";

    }
   

}


