#include<bits/stdc++.h>
using namespace std;


int max_rain(vector<int> arr)
{
    int n = arr.size();

    if(n<=2)
    {
        return  0;
    }

    // finding left and right max wall 

    vector<int> left(n,0) , right(n,0);
    left[0] = arr[0];
    right[n-1] = arr[n-1];

    for(int i=1 ;i<n;i++)
    {
        left[i] = max(left[i-1] , arr[i]);
        right[n-i-1] = max( right[n-i] , arr[n-i-1]);
    }

    int water =0;

    for(int  i=0 ;i<n;i++)
    {

        water+= min(left[i] , right[i]) -arr[i];
    }

    return water;
}

int main()
{

vector<int> arr ={0,1,0,2,1,0,1,3,2,1,2,1};

int r = max_rain(arr);

cout<<r;

    return  0;
}

