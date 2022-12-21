#include<bits/stdc++.h>
using namespace std;

int largestBand(vector<int> arr)
{
    int n =arr.size();
    int cnt;
    // making unorderd set 

    unordered_set<int> s;
    int Largestlen = INT_MIN;

    for(int x: arr)
    {
        s.insert(x);
         
    }

    for(auto i: s)
    {
        int p = i-1;
        if(s.find(p) == s.end())
        {
            // no parent found , that means it can start its own band 
            int nxt_no = i+1;
            cnt=1;

            while(s.find(nxt_no)!=s.end())
            {
                nxt_no++;
                cnt++;
            }

            Largestlen = max(Largestlen , cnt);

        }
    }

    return Largestlen;
}


int main()
{

vector<int> arr ={1,9,3,0,18,5,2,4,10,7,12,6};

int ans = largestBand(arr);

cout<<ans;

    return 0;
}