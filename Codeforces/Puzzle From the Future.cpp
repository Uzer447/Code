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
        string s;
        cin >> s;
        string a = s;
        int lastsum;
        if(s[0]=='0')
        {
            a[0]='1';
        }
        else if(s[0]=='1')
        {
            a[0]='1';
        }
        lastsum = (s[0] - '0') + (a[0] - '0');
        for(int i=1;i<n;i++)
        {
            if (s[i] == '1' && lastsum != 2)
            {
                a[i] = '1';
            }
            else if (s[i] == '1' && lastsum == 2)
            {
                a[i] = '0';
            }
            else if (s[i] == '0' && lastsum != 1)
            {
                a[i] = '1';
            }
            else if (s[i] == '0' && lastsum == 1)
            {
                a[i] = '0';
            }
            lastsum = (s[i] - '0') + (a[i] - '0');
        }
        cout << a << endl;
    }

    return 0;
}
