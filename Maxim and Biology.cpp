#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string g = "ACTG";
    int cnt = 0;
    int minans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (n - i < 4)
            break;
        for (int j = 0; j < 4; j++)
        {
            if (s[i + j] != g[j])
            {
                int temp = s[i + j] - g[j];
                temp = abs(temp);
                int y = 26 - temp;
                // cout<<temp<<" "<<y<<endl;
                cnt += min(temp, y);
            }
        }
        minans = min(minans, cnt);
        // cout<<minans<<endl;
        cnt = 0;
    }
    cout << minans << endl;
    return 0;
}