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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)cout<<s<<endl;
    else if(s.size()==1 && k>=1)
    cout<<0<<endl;
    else
    {
        int len=min(k,n-1);
        rep(i,n)
        {
            if(k<=0)
            break;
            if(i==0)
            {
                if(s[i]!='1')
                {
                    k--;
                    s[i]='1';
                }
            }
            else
            {
                if(s[i]!='0')
                {
                    k--;
                    s[i]='0';
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
