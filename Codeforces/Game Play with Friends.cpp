#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(s[i]-s[i+1]==1)
                {
                    s.erase(s.begin()+i);
                    cnt++;
                    i--;
                }
            }
            else if(i==n-1)
            {
                if(s[i]-s[i-1]==1)
                {
                    s.erase(s.begin()+i);
                    cnt++;
                    i--;
                }
            }
            else
            {
                if(s[i]-s[i+1]==1)
                {
                    s.erase(s.begin()+i);
                    cnt++;
                    i--;
                }
                else if(s[i]-s[i-1]==1)
                {
                    s.erase(s.begin()+i);
                    cnt++;
                    i--;
                }
            }
        }
        cout<<cnt<<endl;
    

    return 0;
}
