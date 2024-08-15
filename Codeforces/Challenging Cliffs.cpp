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
        int n;
        cin >> n;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        sort(vall(v));
        if(n==2)
        {
            cout<<v[0]<<' '<<v[1]<<endl;
            continue;
        }
        int mindiff = INT_MAX;
        int start=-1;
        rep(i, n - 1)
        {
            int diff = v[i + 1] - v[i];
            if (mindiff > diff)
            {
                mindiff = diff;
                start = i+1;
            }
        }
        for(int i=start;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<start;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
