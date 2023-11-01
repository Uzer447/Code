#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    vector<vector<int>> v = {{0, 9, 8, 7, 6, 5, 4, 3, 2, 1}, {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 1, 0, 1, 2, 3, 4, 5, 6, 7}, {7, 2, 1, 0, 1, 2, 3, 4, 5, 6}, {6, 3, 2, 1, 0, 1, 2, 3, 4, 5}, {5, 4, 3, 2, 1, 0, 1, 2, 3, 4}, {4, 5, 4, 3, 2, 1, 0, 1, 2, 3}, {3, 6, 5, 4, 3, 2, 1, 0, 1, 2}, {2, 7, 6, 5, 4, 3, 2, 1, 0, 1}, {1, 8, 7, 6, 5, 4, 3, 2, 1, 0}};
    while (t--)
    {
        string s;
        cin >> s;
        int ans=0;
        for(int i=0;i<3;i++)
        {
            ans+=v[s[i]-'0'][s[i+1]-'0'];
        }
        cout<<ans+4+v[1][s[0]-'0']<<endl;
    }

    return 0;
}
