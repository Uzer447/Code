#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
string decimalToBinary(int n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');
    if (loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
int setKthBit(int n, int k)
{
    return ((1 << k) | n);
}
int binaryToDecimal(string str)
{
    int dec_num = 0;
    int power = 0;
    int n = str.length();

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            dec_num += (1 << power);
        }
        power++;
    }

    return dec_num;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (__builtin_popcount(x) == 1)
            cout << "0 " << x << endl;
        else
        {
            int setbit;
            int temp = x;
            int ind = -1;
            string bin = decimalToBinary(x);
            set<char> st(vall(bin));
            if (*st.begin() == '1' && st.size() == 1)
            {
                int a = 2;
                int b = x - 2;
                cout << min(a, b) << " " << max(a, b) << endl;
            }
            else
            {
                string a = "0";
                string b = "";
                for (int i = 1; i < bin.size(); i++)
                {
                    if (bin[i] == '1')
                    {
                        a = a + '1';
                    }
                    else
                    {
                        a = a + '0';
                    }
                }
                for (int i = 0; i < bin.size(); i++)
                {
                    if (i == 0)
                    {
                        b = b + '1';
                    }
                    else
                    {
                        b = b + '0';
                    }
                }
                //cout<<a<<" "<<b<<endl;
                int p = binaryToDecimal(a);
                int q = binaryToDecimal(b);
                cout << p << " " << q << endl;
            }
        }
    }

    return 0;
}
