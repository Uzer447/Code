#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
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
        int n;
        cin >> n;
        int have0 = 0, have1 = 0;
        bool sorted = true;
        int prev = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
        cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            //cout<<a[i]<<" "<<prev<<endl;
            if (a[i] < prev && sorted == true)
            {
                sorted = false;
            }
            else
            {
                prev = a[i];
            }
            if (b[i] == 0)
                have0++;
            else if (b[i] == 1)
                have1++;
        }
        if (have0 && have1)
            cout << "Yes" << endl;
        else if (sorted)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}
