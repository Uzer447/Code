#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i; j < n; j++)
            {
                //cout << v[j] << " ";
                if (v[j] == k)
                    cnt++;
                //cout << n - i - cnt << endl;
                if (cnt >= (n - j - cnt))
                {
                    flag = 1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if(flag==1)
            break;
            //cout<<endl;
        }
        if (flag == 0)
            cout << "NO" << endl;
    }

    return 0;
}
