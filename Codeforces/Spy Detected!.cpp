#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
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
        cin>>n;
        vi v(n);
        vi freq(101,0);
        rep(i,n)
        {
            cin>>v[i];
            freq[v[i]]++;
        }
        rep(i,n)
        {
            if(freq[v[i]]==1)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
