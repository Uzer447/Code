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

class comp
{
public:
    bool operator()(pii a, pii b)
    {
        if (a.first < b.first)
            return true;
        else if (a.first == b.first && a.second > b.second)
        {
            return true;
        }
        return false;
    }
};
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
        rep(i, n)
        {
            int a;
            cin >> a;
            v[i] = a%k;
            if (v[i] == 0) v[i]=k;
        }
        sort(vall(v),greater<int>());
        
        // while (!pq.empty())
        // {
        //     cout << pq.top().first << endl;
        //     pq.pop();
        // }
        while(!pq.empty())
        {
            auto it=pq.top();
            //cout<<it.first<<" ";
            pq.pop();
            it.first-=k;
            if(it.first<=0)
            {
                cout<<it.second<<" ";
            }
            else
            {
                pq.push(it);
            }
        }
        cout << endl;
    }

    return 0;
}
