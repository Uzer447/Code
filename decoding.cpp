#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> q;
    q.push_back(s[0]);
    bool d = true;
    if (n % 2 == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (d)
            {
                q.push_front(s[i]);
                d = false;
            }
            else
            {
                q.push_back(s[i]);
                d = true;
            }
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (d)
            {
                q.push_back(s[i]);
                d = false;
            }
            else
            {
                q.push_front(s[i]);
                d = true;
            }
        }
    }
    for (auto i : q)
    {
        cout << i;
    }
    cout << endl;
    return 0;
}