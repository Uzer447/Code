// #include <bits/stdc++.h>
// #define forn(n) for (int i = 0; i < n; i++)
// #define endl "\n"
// #define ll long long
// using namespace std;
// int main()
// {
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a = 1;
//         ll b = 2;
//         ll k = 1;
//         ll c = 0;
//         ll d = 0;
//         ll temp = n;
//         while (n != 0)
//         {
//             if (n % 2 == 0)
//             {
//                 c += k;
//                 d += k;
//             }
//             else
//             {
//                 c += k;
//             }
//             k<<=1;
//             n >>= 1;
//         }
//         if (c == 0 || d == 0)
//         {
//             c += k;
//             d += k;
//         }
//         if (c == d)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             while (a & (2 * a) != 0 || a == c || a == d || 2 * a == c || 2 * a == d)
//             {
//                 a++;
//             }
//             cout << a << " " << 2 * a << " " << c << " " << d << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

vector<long long> find_four_integers(long long N) {
    int k = 0;
    while ((1LL<<k) <= N) {
        k++;
    }

    long long ab = (1LL<<(k-1)) | (1LL<<k);
    long long a = ab | (N^(1LL<<k));
    long long b = ab | (N^(1LL<<k));
    long long c = N & ~(1LL<<k);
    long long d = (a & b & c) ^ N;

    if (c >= 1 && d >= 1 && a != b && a != c && a != d && b != c && b != d && c != d) {
        return {a, b, c, d};
    } else {
        return {-1};
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        vector<long long> ans = find_four_integers(N);

        if (ans[0] == -1) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < 4; i++) {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
