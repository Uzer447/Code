#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ans = 0;
        if (n < 9)
            cout << ans << endl;
        else
        {
            float ans=(float)n/10;
            long long k=n/10;
            cout<<ans<<" "<<k<<" ";
            if(ans-k>0.5)
            {
                cout<<k+1<<endl;
            }
            else
            cout << k << endl;
        }
    }
    return 0;
}