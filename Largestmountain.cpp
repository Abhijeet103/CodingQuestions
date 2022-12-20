#include<bits/stdc++.h>
using namespace std;

int LargestMountain(vector<int> num)
{
// detect peak 
int n= num.size();
int max_peak=0;

for(int i=1 ;i<n-2;)
{
    if(num[i]>num[i-1] and num[i]>num[i+1])
    {
        // peak 
        // count forward and backwards 
        int count =1;
        int j=i;

        while(j>=1 && num[j]>num[j-1])
        {
            j--;
            count++;
        }

        while(i<=n-2 && num[i]>num[i+1])
        {
            i++;
            count++;
        }

        max_peak = max(count , max_peak);
    }

    else
    {
        //not peak
        i++;
    }
}

return max_peak;
}

int main()
{

vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

int ans =  LargestMountain(arr);

cout<<ans;



    return 0;
}