#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i]=i+1;
    }
    sort(v.begin(),v.begin()+k+1,greater<int>());
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}
