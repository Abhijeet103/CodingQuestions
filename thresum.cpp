#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> threesum(vector<int> arr , int targetSum )
{
// iterate over the array 
// pic on element 
//apply two sum in rest of the array
// using two pointer approach we can find two sum 
sort(arr.begin(), arr.end());
int n = arr.size();
vector<vector<int>> result;

for(int i=0 ;i<n-3 ;i++)
{
 int j=i+1 ;
 int k=n-1;

 while(j<k)
 {
    int curr_sum = arr[i];
    curr_sum += arr[j];
    curr_sum += arr[k];

    if(curr_sum == targetSum)
    {

        result.push_back({arr[i] ,arr[j] , arr[k]});
        j++;
        k--;
    }

    else if (curr_sum> targetSum)
    {
        k--;
    }

    else
    {
        j++;
    }

 }
}

return result;
}



int main()
{

vector<int> arr= {1,2,3,4,5,6,7,8,9,15};
int s =18;
vector<vector<int>> r;
r = threesum(arr , s);

for (auto  i : r)
{
    for(auto j : i)
    {
        cout<<j<<" ";
    }
    cout<<endl;

}



    return 0;
}