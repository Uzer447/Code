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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int even=0;
        int odd=0;
        rep(i, n)
        {
            cin >> v[i];
            if(v[i]%2==0)
            even++;
            else
            odd++;
        }
        if(even%2==0 && odd%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int flag=0;
                if(v[i]%2==0)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(v[j]%2==1)
                        {
                            if(abs(v[i]-v[j])==1)
                            {
                                even--;
                                odd--;
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag)
                    break;
                }
                else
                {
                    for(int j=0;j<n;j++)
                    {
                        if(v[j]%2==0)
                        {
                            if(abs(v[i]-v[j])==1)
                            {
                                //cout<<v[j]<<" ";
                                even--;
                                odd--;
                                flag=1;
                                //cout<<even<<" "<<odd<<endl;
                                break;
                            }
                        }
                    }
                    if(flag)
                    break;
                }
            }
            if(even%2==0 && odd%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
