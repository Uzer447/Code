#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 10)
            cout << x << endl;
        else
        {
            vector<int> ans;
            int sum = x - 9;
            ans.push_back(9);
            for (int i = 8; i > 0; i--)
            {
                while (sum >= i)
                {
                    sum -= i;
                    ans.push_back(i);
                }
                if (sum <= 0)
                    break;
            }
            int acc = accumulate(ans.begin(), ans.end(), 0);
            if (acc == x)
            {
                for (auto i : ans)
                    cout << i;
                cout << endl;
            }
            else
            {
                for (int i = 8; i > 0; i++)
                {
                    acc -= i;
                    if (acc == x)
                    {
                        for (auto i : ans)
                            cout << i;
                        cout << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}