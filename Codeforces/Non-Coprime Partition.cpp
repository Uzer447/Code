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
    int n;
    cin >> n;
    if (n <= 2)
        cout << "No" << endl;
    else if(n==4)
    {
        cout << "Yes" << endl;
        cout<<"1 2"<<endl;
        cout<<"3 1 3 4"<<endl;
    }
    else
    {
        cout << "Yes" << endl;
        if (n % 2 == 0)
        {
            cout << n / 2 << " ";
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i << " ";
            }
            cout<<endl;
            cout << n / 2 <<" ";
            for (int i = n / 2 + 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << (n+1) / 2  << " ";
            for (int i = 1; i <= ((n+1) / 2) ; i++)
            {
                cout << i << " ";
            }
            cout<<endl;
            cout << n - ((n+1) / 2) << " ";
            for (int i = ((n+1) / 2)+1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}