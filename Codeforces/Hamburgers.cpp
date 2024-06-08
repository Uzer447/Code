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
    string s;
    cin>>s;
    ll nb,ns,nc,pb,ps,pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    ll r;
    cin>>r;
    ll cb=0,cc=0,cs=0;
    for(auto it:s)
    {
        if(it=='B')
        cb++;
        else if(it=='C')
        cc++;
        else
        cs++;
    }
    ll low=0;
    ll high=r*1000000;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        if((1LL*max(0LL,mid*cb-nb)*pb + 1LL*max(0LL,mid*cs-ns)*ps + 1LL*max(0LL,mid*cc-nc)*pc)<=r)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<low-1<<endl;
    return 0;
}
