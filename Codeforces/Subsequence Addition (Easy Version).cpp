#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int flag = 1;
        sort(v.begin(), v.end(), greater<int>());
        ll sum = accumulate(v.begin(), v.end(), 0);
        sum -= v[0];
        int x=count(v.begin(),v.end(),1);
        for (int i = 1; i < n; i++)
        {
            if (sum < v[i - 1])
            {
                flag = 0;
                break;
            }
            sum -= v[i];
        }
        if (n == 1 && v[0] > 1)
            cout << "NO" << endl;
        else if(n==2 && v[0]+v[1]>2)
        {
            cout<<"NO" << endl;
        }
        else if(n>2 && x<2)
        {
            cout<<"NO" << endl;
        }
        else
        {
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
