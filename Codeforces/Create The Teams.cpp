#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        cin >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        v.pb(INT_MIN);
        int curr=0;
        int mn=INT_MAX;
        int team=0;
        for(int i=-1;i<n;i++)
        {
            // cout<<curr<<" "<<mn<<endl;
            // cout<<team<<endl;
            if((1LL*curr*mn)>=x)
            {
                team++;
                curr=1;
                mn=v[i+1];
            }
            else
            {
                curr++;
                mn=v[i+1];
            }
        }
        //cout<<curr<<" "<<mn<<endl;
        if((1LL*curr*mn)>=x)
            {
                team++;
                curr=0;
                mn=INT_MAX;
            }
        cout<<team<<endl;   
    }

    return 0;
}
