#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
void printbinary(ll n)
{
    vector<string> v;
    for (int i = 1; i <= n; i++)
    {
        string ans = "";
        int j=i;
        while (j--)
        {
            ans.push_back('1');
        }
        int x = n - i;
        while (x--)
            ans.push_back('0');
        v.push_back(ans);
    }
    string temp=v[1];
    temp[0]='0';
    v[1]=temp;
    forn(n)
    {
        cout<<v[i]<<endl;
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
        if (n <= 2)
            cout << -1 << endl;
        else
        {
            printbinary(n);
        }
    }

    return 0;
}
