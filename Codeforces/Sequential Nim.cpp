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
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        int ans=-1;
        rep(i,n)
        {
            if(v[i]>1)
            {
                ans=i;
                break;
            }
        }
        if(ans==-1)
        {
            if(n%2==0)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
        else
        {
            if(ans%2==0)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
        }
    }

    return 0;
}
