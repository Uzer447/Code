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
        vector<int> num(n);
        for (int i = 0; i < n; i++)
            cin >> num[i];
        map<int, int> color;
        int cnt = 1;
        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        for (int i = 0; i < n; i++)
        {
            for (auto j = 0; j < primes.size(); j++)
            {
                if (num[i] % primes[j] == 0)
                {
                    if (color.count(primes[j]) == 0)
                    {
                        color[primes[j]] = cnt;
                        cnt++;
                    }
                    break;
                }
            }
        }
        cout << color.size();
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (auto j = 0; j < primes.size(); j++)
            {
                if (num[i] % primes[j] == 0)
                {
                    cout << color[primes[j]] << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}