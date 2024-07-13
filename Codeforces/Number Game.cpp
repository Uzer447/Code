#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
        }
        else if(n==2)
        {
            cout<<"Ashishgup"<<endl;
        }
        else if(n%2==1)
        {
            cout<<"Ashishgup"<<endl;
        }
        else if(__builtin_popcountll(n)==1)
        {
            cout<<"FastestFinger"<<endl;
        }
        else 
        {
            if(n%4==0)
            {
                cout<<"Ashishgup"<<endl;
            }
            else
            {
                n/=2;
                if(isPrime(n))
                {
                    cout<<"FastestFinger"<<endl;
                }
                else
                {
                    cout<<"Ashishgup"<<endl;
                }
            }
        }

    }

    return 0;
}
