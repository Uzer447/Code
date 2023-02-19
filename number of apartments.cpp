#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 15 == 0)
            cout << n / 15 <<" "<<n/15<<" "<<n/15<< endl;
        else
        {
            ll ans = n / 15;
            ll r=n%15;
            ll th=0,fi=0,se=0;
            if(r%3==0)
            th=(r/3);
            if(r%5==0)
            fi=(r/5);
            if(r%7==0)
            se=(r/7);
            if(ans==0 && th==0 && fi==0 && se==0)
            cout<<-1<<endl;
            else
            cout<<ans+th<<" "<<ans+fi<<" "<<ans+se<<endl;
        }
    }
    return 0;
}