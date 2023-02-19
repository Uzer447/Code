#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    vector<int> v;
    int sum = 0;
    forn(6)
    {
        int a;
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    int n = 6;
    for (int i = 0; i < 6; i++)
    {
        int temp = sum;
        int tempsum = v[i];
        temp -= v[i];
        for (int j = i + 1; j < n; j++)
        {
            temp -= v[j];
            tempsum += v[j];
            for (int k = j + 1; k < n; k++)
            {
                if (tempsum + v[k] == temp - v[k])
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;

    // int s1 = 0, s2 = 0;
    // forn(3)
    // {
    //     s1 += v[i];
    //     s2 += v[i + 3];
    // }
    // if (s1 == s2)
    // {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    // for (int i = 1; i < 3; i++)
    // {
    //     s1 -= v[i - 1];
    //     s1 += v[i + 2];
    //     s2 -= v[i + 2];
    //     s2 += v[(i + 5) % 6];
    //     if (s1 == s2)
    //     {
    //         cout << "YES" << endl;
    //         return 0;
    //     }
    // }
    // cout << "NO" << endl;
    return 0;
}