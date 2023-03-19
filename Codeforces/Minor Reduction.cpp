#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int pos=-1;
        int maxsum=INT_MIN;
        forn(s.size()-1)
        {
            int fd=s[i]-'0';
            int ld=s[i+1]-'0';
            if(fd+ld>=maxsum)
            {
                maxsum=fd+ld;
                pos=i;
            }
        }
        //cout<<maxsum<<endl;
        if(maxsum<10)
        {
            int fd=s[0]-'0';
            int ld=s[1]-'0';
            int sum=fd+ld;
            string temp="";
            temp.push_back(s[0]);
            temp.push_back(s[1]);
            string k=to_string(sum);
            s.replace(0, 2,k);
        }
        else
        {
            int fd=s[pos]-'0';
            int ld=s[pos+1]-'0';
            int sum=fd+ld;
            //cout<<sum<<endl;
            string temp="";
            temp.push_back(s[pos]);
            temp.push_back(s[pos+1]);
            string k=to_string(sum);
            s.replace(pos, 2,k);
        }
        cout<<s<<endl;
    }

    return 0;
}
