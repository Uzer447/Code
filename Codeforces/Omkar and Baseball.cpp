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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        bool sorted=true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]<v[i])
            {
                sorted=false;
                break;
            }
        }
        if(sorted)
        {
            cout<<0<<endl;
        }
        else
        {
            int left=-1;
            int right=n;
            while(left<n)
            {
                if(v[left+1]==left+2)
                {
                    left++;
                }
                else
                {
                    break;
                }
            }
            while(right>=0)
            {
                if(v[right-1]==right)
                {
                    right--;
                }
                else
                {
                    break;
                }
            }
            int flag=1;
            for(int i=left+1;i<=right-1;i++)
            {
                if(v[i]==i+1)
                {
                    flag=2;
                    break;
                }
            }
            cout<<flag<<endl;
        }
    }

    return 0;
}
