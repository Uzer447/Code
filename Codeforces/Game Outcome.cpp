#include <bits/stdc++.h>
#define ll long long
using namespace std;

int colsum(int j, vector<vector<int>> &v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i][j];
    }
    return sum;
}
int rowsum(int i, vector<vector<int>> &v)
{
    int sum = 0;
    for (int j = 0; j < v.size(); j++)
    {
        sum += v[i][j];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans=0;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[i][j] = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int col=colsum(j,v);
            int row=rowsum(i,v);
            if (col > row)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}