#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
            v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if(i==v.size()-1)cout << v[i] << endl;
        else
        cout << v[i] << "+";
    }
    return 0;
}