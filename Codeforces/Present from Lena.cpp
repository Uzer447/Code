#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n;
    int k = n;
    n = 0;
    for (int j = 0; j <= a; j++)
    {
        for (int i = 1; i < 2 * k; i++)
        {
            cout << " ";
        }
        for (int i = 0; i <= n; i++)
        {
            if(k==0 && i==0)
            cout<<i;
            else
            cout  << " "<<i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout  << " " << i;
        }
        cout << endl;
        n++;
        k--;
    }
    // cout<<n<<" "<<k<<endl;
    n = a - 1;
    k = 1;
    for (int j = 0; j < a; j++)
    {
        for (int i = 0; i < 2 * k-1; i++)
        {
            cout << " ";
        }
        for (int i = 0; i <= n; i++)
        {
            cout  << " "<<i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout  << " "<<i;
        }
        cout << endl;
        n--;
        k++;
    }
    return 0;
}