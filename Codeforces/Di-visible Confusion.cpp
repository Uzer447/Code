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
        int n;
        cin>>n;
        bool flag=true;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
            bool temp=false;
            for(int j=i+2;j>=2;j--)
            {
                if(v[i]%j!=0)
                {
                    temp=true;
                    break;
                }
            }
            flag&=temp;
        }
        if(flag)
        yes
        else
        no
    }

    return 0;
}
