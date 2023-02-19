#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        v.push_back(a);
    }
    if (n % 2 == 0)
        cout << "home" << endl;
    else
        cout << "contest" << endl;

    return 0;
}