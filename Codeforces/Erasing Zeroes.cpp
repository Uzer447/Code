#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
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
        int cnt = 0;
        int ind = -1;
        set<char> st(vall(s));
        rep(i, s.size())
        {
            if(s[i]=='1')
            {
                ind = i;
                break;
            }
        }
        for (int i = ind + 1; i < s.size(); i++)
        {
            if (s[i] == '0')
                cnt++;
            else
                break;
        }
        if(st.size()==1)
        cout<<0<<endl;
        else
        cout << cnt << endl;
    }

    return 0;
}
