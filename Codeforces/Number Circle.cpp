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
    int n;
    cin >> n;
    vi v(n);
    rep(i, n)
            cin >>
        v[i];
    sort(vall(v));
    v.insert(v.begin(), v[n - 1]);
    v.push_back(v[1]);
    n = v.size();
    for(int i=1;i<n-3;i++)
    {
        if(v[n-3]+v[i]>v[n-2])
        {
            swap(v[i],v[n-1]);
        }
    }
    v[1]=v[n-1];
    int flag = 1;
    for (int i = 1; i < n - 1; i++)
    {
        int sum = v[i - 1] + v[i + 1];
        //cout << v[i - 1] << " " << v[i + 1] << endl;
        if (sum <= v[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
        for(int i=1;i<n-1;i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
