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
    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;
        int n = p.size();
        sort(vall(p));
        int k = 0;
        int flag=0;
        int todel = h.size() - n;
        while (k <= todel)
        {
            string temp = "";
            for (int i = k; i < n + k; i++)
            {
                temp = temp + h[i];
            }
            sort(vall(temp));
            if(temp==p)
            {
                flag=1;
                break;
            }
            k++;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
