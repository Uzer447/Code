#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
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
        string t;
        cin >> t;
        vi hash(26, 0);
        rep(i, s.size())
        {
            hash[s[i] - 'a']++;
        }
        if (t == "abc" && hash[0]>0 && hash[1]>0 && hash[2]>0)
        {
            string ans;
            while(hash[0]>0)
            {
                ans=ans+'a';
                hash[0]--;
            }
            while(hash[2]>0)
            {
                ans=ans+'c';
                hash[2]--;
            }
            while(hash[1]>0)
            {
                ans=ans+'b';
                hash[1]--;
            }
            for(int i=3;i<26;i++)
            {
                while(hash[i]>0)
                {
                    ans=ans+char(97+i);
                    hash[i]--;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            sort(vall(s));
            cout<<s<<endl;
        }
    }

    return 0;
}
