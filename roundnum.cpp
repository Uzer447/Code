#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r = 1;
        vector<int> v;
        while (n > 0)
        {
            int d = n % 10;
            n /= 10;
            if (d != 0)
            {
                v.push_back(d * r);
            }
            r *= 10;
        }
        cout << v.size()<< endl;
        for(auto a : v)
        cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}