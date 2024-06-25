#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pii,int> mp;
        pii curr={0,0};
        mp[curr]=0;
        int l=-1;
        int r=n;
        int currx=0;
        int curry=0;
        int maxlen=0;
        pii ans;
        int i=0;
        for(auto &it:s)
        {
            if(it=='R')
            curry++;
            else if(it=='L')
            curry--;
            else if(it=='U')
            currx--;
            else
            currx++;
            curr.first=currx;
            curr.second=curry;
            if(mp.count(curr)!=0)
            {
                if(i-mp[curr]+1<r-l+1)
                {
                    l=mp[curr];
                    r=i;
                }
            }
            mp[curr]=i+1;
            i++;
        }
        if(l==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<l+1<<" "<<r+1<<endl;
        }
    }

    return 0;
}
