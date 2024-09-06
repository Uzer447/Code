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
        int n = s.size();
        char ch = s[0];
        int ind = 0;
        rep(i, n)
        {
            if (s[i] < ch)
            {
                ch = min(ch, s[i]);
                ind = i;
            }
        }
        cout<<ch<<" ";
        rep(i,n)
        {
            if(i==ind)
            continue;
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
