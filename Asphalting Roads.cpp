#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    n *= n;
    unordered_map<int, int> mph;
    unordered_map<int, int> mpv;
    int days = 0;
    while (n--)
    {
        int h, v;
        cin >> h >> v;
        if (mph[h] == 0 && mpv[v] == 0)
        {
            days++;
            cout << days << " ";
            mph[h] = 1;
            mpv[v] = 1;
        }
        else
        {
            days++;
        }
    }

    return 0;
}