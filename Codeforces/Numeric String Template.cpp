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
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        int m;
        cin>>m;
        rep(i,m)
        {
            string s;
            cin>>s;
            map<char,int> m1;
            map<int,char> m2;
            if(s.size()!=v.size())
            {
                no;
                continue;
            }
            bool ok=true;
            rep(j,n)
            {
                if(m1.find(s[j])==m1.end() && m2.find(v[j])==m2.end())
                {
                    m1[s[j]]=v[j];
                    m2[v[j]]=s[j];
                }
                else if((m1.find(s[j])!=m1.end() && m1[s[j]]!=v[j]) || (m2.find(v[j])!=m2.end() && m2[v[j]]!=s[j]))
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}
