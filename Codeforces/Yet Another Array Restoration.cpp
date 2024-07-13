#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        int n,x,y;
        cin>>n>>x>>y;
        if(n==2)
        {
            cout<<x<<" "<<y<<endl;
            continue;
        }
        int diff=y-x;
        int step;
        int ele;
        for(int i=1;i<=diff;i++)
        {
            if(diff%i==0)
            {
                ele=diff/i;
                ele++;
                if(ele<=n)
                {
                    step=i;
                    break;
                }
            }
        }
        n-=ele;
        vi ans;
        int curr=x-step;
        while(curr>0 && n>0)
        {
            ans.pb(curr);
            curr-=step;
            n--;
        }
        reverse(vall(ans));
        for(int i=x;i<=y;i+=step)
        {
            ans.pb(i);
        }
        curr=y+step;
        while(n>0)
        {
            ans.pb(curr);
            curr+=step;
            n--;
        }
        for(auto it:ans)
        cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}
