#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        ll suma=0;
        int maxb=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            suma+=x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            suma+=x;
            maxb=max(maxb,x);
            b.push_back(x);
        }
        cout<<suma-maxb<<endl;
    }

    return 0;
}
