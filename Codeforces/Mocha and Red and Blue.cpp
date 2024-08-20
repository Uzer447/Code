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
        if (n == 1)
        {
            cout << ((s[0] == '?') ? "R" : s);
            cout << endl;
            continue;
        }
        queue<int> q;
        rep(i, n)
        {
            if (s[i] != '?')
                q.push(i);
        }
        if (q.size() == 0)
        {
                s[0] = 'R';
            for (int i = 1; i < n; i++)
                if (s[i] == '?' && s[i - 1] != '?')
                    s[i] = s[i - 1] ^ ('B' ^ 'R');
            for (int i = n - 2; i>=0; i--)
                if (s[i] == '?' && s[i + 1] != '?')
                    s[i] = s[i + 1] ^ ('B' ^ 'R');
        }
        while (!q.empty())
        {
            int ind = q.front();
            q.pop();
            if (ind - 1 >= 0 && s[ind - 1] == '?')
            {
                if (s[ind] == 'R')
                    s[ind - 1] = 'B';
                else
                    s[ind - 1] = 'R';
                q.push(ind - 1);
            }
            if (ind + 1 < n && s[ind + 1] == '?')
            {
                if (s[ind] == 'R')
                    s[ind + 1] = 'B';
                else
                    s[ind + 1] = 'R';
                q.push(ind + 1);
            }
        }
        cout << s << endl;
        // rep(i,n)
        // {
        //     if(s[i]=='?')
        //     {
        //         if(i==0)
        //         {
        //             if(s[i+1]=='R')
        //             s[i]='B';
        //             else
        //             s[i]='R';
        //         }
        //         else if(i==n-1)
        //         {
        //             if(s[i-1]=='R')
        //             s[i]='B';
        //             else
        //             s[i]='R';
        //         }
        //         else
        //         {
        //             if(s[i-1]==s[i+1])
        //             {
        //                 if(s[i-1]=='R')
        //                 s[i]='B';
        //                 else
        //                 s[i]='R';
        //             }
        //             else
        //             {
        //                 s[i]='R';
        //             }
        //         }
        //     }
        // }
        // cout<<s<<endl;
    }

    return 0;
}
