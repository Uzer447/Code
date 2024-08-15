#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return false;
        }
    }
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=count(vall(s),'0');
        if(cnt%2==1 && cnt!=1)
        {
            cout<<"ALICE"<<endl;
            continue;
        }
        else
        {
            print("BOB");
            continue;
        }
        //cout<<cnt<<endl;
        bool rev = true;
        bool alice=true;
        int a=0;
        int b=0;
        while(cnt>0)
        {
            if(isPalindrome(s)==false && rev==true)
            {
                reverse(vall(s));
                if(alice)
                {
                    //a++;
                    alice=false;
                }
                else
                {
                    //b++;
                    alice=true;
                }
                rev=false;
            }
            else
            {
                rep(i,n)
                {
                    if(s[i]=='0')
                    {
                        s[i]='1';
                        cnt--;
                        break;
                    }
                }
                if(alice)
                {
                    a++;
                    alice=false;
                }
                else
                {
                    b++;
                    alice=true;
                }
                rev=true;
            }
            cout<<a<<" "<<b<<endl;
        }
        if(a<b)
        {
            cout<<"ALICE"<<endl;
        }
        else if(b<a)
        {
            print("BOB");
        }
        else
        {
            print("DRAW");
        }
    }

    return 0;
}
