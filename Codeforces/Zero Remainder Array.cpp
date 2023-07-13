#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int binarysearch(vector<int> &v, int x,int n,int k,unordered_map<int,int> &mp)
{
    int left=0;
    int right=n-1;
    int mid=0;
    while(left<right)
    {
        mid=left+right;
        mid/=2;
        if((v[mid]+x)%k==0 && mp[v[mid]]==0)
        {
            return mid;
        }
        else if((v[mid]+x)%k>0)
        {
            right = mid;
        }
        else
        left = mid+1;
    }
    return -1;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int,int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 0;
        }
        sort(v.begin(), v.end());
        int x=0;
        forn(n)
        {
            int mid=binarysearch(v,x,n,k,mp);
            if(mid!=-1)
            {
                cout<<mid<<endl;
                mp[v[mid]] = 1;
                v[i]+=x;
                x++;
            }
            else
            x++;
        }
        cout<<x<<endl;
    }

    return 0;
}
