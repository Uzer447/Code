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
map<int,int> parent;
map<int,int> size1;
void make(int v)
{
    parent[v] = v;
    size1[v] = 1;
}
int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size1[a] < size1[b])
            swap(a, b);
        parent[b] = a;
        size1[a] += size1[b];
    }
}
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
        vi a(n);
        vi p(n);
        rep(i, n)
        {
            cin >> a[i];
            make(a[i]);
        }
        rep(i, n)
        {
            cin >> p[i];
        }
        rep(i, n)
        {
            if (i == 0)
            {
                int x = a[i] + p[i];
                if (x >= a[i + 1])
                {
                    Union(a[i], a[i + 1]);
                }
            }
            else if (i == n - 1)
            {
                int x = a[i] - p[i];
                if (x <= a[i - 1])
                {
                    Union(a[i], a[i - 1]);
                }
            }
            else
            {
                int x = a[i] - p[i];
                int y = a[i] + p[i];
                if (x <= a[i - 1])
                {
                    Union(a[i], a[i - 1]);
                }
                if (y >= a[i + 1])
                {
                    Union(a[i], a[i + 1]);
                }
            }
        }
        int cnt=0;
        rep(i,n)
        {
            if(parent[a[i]]==a[i])
            cnt++;
        }
        if(cnt>2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}
