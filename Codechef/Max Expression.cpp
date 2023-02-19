#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;

        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                v.push_back(s[i] - '0');
            else if (s[i] == '+')
                a++;
            else
                b++;
        }
        sort(v.begin(), v.end(), greater<int>());
        n = v.size();
        int d = n - a - b;
        int i = 0;
        while (d--)
        {
            cout << v[i];
            i++;
        }
        while (a--)
        {
            cout << "+" << v[i];
            i++;
        }
        while (b--)
        {
            cout << "-" << v[i];
            i++;
        }
        cout<<endl;
    }
    return 0;
}
