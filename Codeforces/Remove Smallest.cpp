#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        rep(i, n)
                cin >>
            v[i];
        int flag = 1;
        sort(vall(v));
        rep(i, n - 1)
        {
            if (abs(v[i] - v[i + 1]) > 1)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    
    return 0;
}
