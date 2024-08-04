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
        string s;
        cin >> s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                {
                    s[i]='b';
                }
                else
                {
                    s[i]='a';
                }
            }
            else
            {
                if(s[i]=='z')
                {
                    s[i]='y';
                }
                else
                {
                    s[i]='z';
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
