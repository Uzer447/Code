#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
vector<bool> isprime(100001,1);
vector<bool> primesieve()
{
    isprime[0]=isprime[1]=false;
    for(int i=2;i<isprime.size();i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<isprime.size();j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    return isprime;
}
int nextPrime(int N)
{
    if(isprime[N]==true)
    return N;
    while(isprime[N]==false)
    {
        N++;
    }
    return N;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<int> nxtprime(100001, 0);
    for (int i = 1; i < nxtprime.size(); i++)
    {
        nxtprime[i] = nextPrime(i);
    }
    cout<<nxtprime[4]<<endl;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
    }
    vector<vector<int>> add(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = nxtprime[matrix[i][j]] - matrix[i][j];
        }
    }
    vector<int> ans;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp += add[i][j];
        }
        ans.push_back(temp);
        temp = 0;
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            temp += add[i][j];
        }
        ans.push_back(temp);
        temp = 0;
    }
    int k = INT_MAX;
    for (int i = 0; i < ans.size(); i++)
    {
        k = min(k, ans[i]);
    }
    cout << k << endl;
    return 0;
}
