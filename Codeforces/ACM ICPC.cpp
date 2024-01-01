#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
bool threeSum(vector<int>& nums,int req) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<req)j++;
                else if(sum>req)k--;
                else if(sum==req)
                {
                    return true;
                }
            }
        }
        return false;
    }
int main()
{
    vector<int> v;
    int sum = 0;
    forn(6)
    {
        int a;
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    bool flag;
    if(sum%2==0)
    flag=threeSum(v,sum/2);
    else
    flag=false;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}