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
const string T = "abacaba";
int count(const string& s) {
    int cnt = 0;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s.substr(i, T.size()) == T) {
            ++cnt;
        }
    }
    return cnt;
}
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
        int ans=0;
        string temp;
        for(int i=0;i+7<=n;i++)
        {
            temp=s;
            int flag=1;
            for(int j=0;j<7;j++)
            {
                if(temp[i+j]!=T[j] && temp[i+j]!='?')
                {
                    flag=0;
                    break;
                }
                temp[i+j]=T[j];
            }
            if(flag && count(temp)==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(temp[j]=='?')
                    temp[j]='d';

                }
                ans=1;
                break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
            cout<<temp<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
