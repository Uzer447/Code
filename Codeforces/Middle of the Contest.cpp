#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int h1, m1, h2, m2;
    string s1, s2;
    cin >> s1 >> s2;
    h1 = stoi(s1.substr(0, 2));
    m1 = stoi(s1.substr(3, 2));
    h2 = stoi(s2.substr(0, 2));
    m2 = stoi(s2.substr(3, 2));
    // cout<<h1<<" "<<m1<<" "<<m2<<" "<<h2<<endl;
    int x = h2 - h1;
    int y = m2 - m1;
    int t = x * 60 + y;
    t /= 2;
    // cout<<t<<endl;
    int a = t / 60;
    int b = t % 60;
    h1 += a;
    m1 += b;
    h1 += m1 / 60;
    m1 %= 60;
    if (h1 % 10 == h1 && m1 % 10 == m1)
        cout << "0" << h1 << ":0" << m1 << endl;
    else if (h1 % 10 == h1 && m1 % 10 != m1)
        cout << "0" << h1 << ":" << m1 << endl;
    else if (h1 % 10 != h1 && m1 % 10 == m1)
        cout << h1 << ":0" << m1 << endl;
    else
        cout << h1 << ":" << m1 << endl;
        
    return 0;
}
