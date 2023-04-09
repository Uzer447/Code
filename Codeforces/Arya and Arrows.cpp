#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, k;
    cin >> n >> k;
    ll to=1<<n;
    if (k == (1 << (n - 1)))
    {
        cout << n << endl;
    }
    else if (k % 2 == 1)
    {
        cout << 1 << endl;
    }
    else if (k % 2 == 0 && k % 4 != 0)
    {
        cout << 2 << endl;
    }
    else if (k % 4 == 0 && k % 16 != 0)
    {
        int x = k % 16;
        vector<int> v = {0, 3, 4, 3};
        v[0] = n - 1;
        x = x / 4;
        cout << x << endl;
        cout << v[x] << endl;
    }
    else if(k%16==0)
    {
        
        ll temp=1<<(n-1);
        //cout<<temp<<endl;
        if(k>temp)
        {
            k=to-k;
        }
        int x=k/16;
        cout<<(4+x)<<endl;
    }
    string a = "1";
    vector<string> v;
    // v.push_back("1");
    n++;
    for (int i = 2; i <= n; i++)
    {
        v.push_back(a);
        // cout<<a<<endl;
        string te = to_string(i);
        a = a + te + a;
    }
    n--;
    string ans = v[n - 1];
    cout << ans << endl;
    cout << ans[k - 1] << endl;
    return 0;
}
