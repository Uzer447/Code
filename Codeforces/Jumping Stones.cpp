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
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int curr=1;
    int cnt=0;
    while(curr!=n)
    {
        int left=0;
            int right=0;
        cnt++;
        if(v[curr]==-1)
        {
            
            if(curr-1>0 && v[curr-1]!=-1)
            {
                left=v[curr-1]-1;
            }
            if(curr+1<n+1 && v[curr+1]!=-1)
            {
                right=v[curr+1];
            }
        }
        //cout<<left<<" "<<right<<endl;
            if(v[curr]!=-1)
            {
                curr=v[curr];
            }
            else if(curr-1>0 && v[curr-1]==-1)
            {
                curr++;
            }
            else if(left>right)
            {
                curr--;
            }
            else
            {
                curr++;
            }
    }
    cout<<cnt<<endl;

    return 0;
}
