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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        rep(i,n)cin>>v[i];
        map<ll,vector<ll>> mpp;
        rep(i,n)
        {
            mpp[v[i]%k].pb(v[i]);
        }
        int odd=0;
        //cout<<"here"<<endl;
        for(auto &it:mpp)
        {
            if(it.second.size()%2==1)
            odd++;
        }
        if((n%2==0 && odd!=0) || (n%2==1 && odd!=1))
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans=0;
        for(auto &it:mpp)
        {
            sort(vall(it.second));
            if(it.second.size()%2==0)
            {
                for(int i=0;i<it.second.size();i+=2)
                {
                    ans+=abs(it.second[i+1]-it.second[i])/k;
                }
            }
            else
            {
                map<ll,ll> tp;
                for(auto &ele:it.second)tp[ele]++;
                vector<ll> test;
                for(auto &ele:tp)
                {
                    if(ele.second%2==1)
                    test.pb(ele.first);
                }
                if(test.size()>1)
                {
                    if(test.size()%2==0)
                    {
                        for(int i=0;i<test.size();i+=2)
                        {
                            ans+=abs(test[i+1]-test[i])/k;
                        }
                    }
                    else
                    {
                        vector<ll> front(test.size(),0);
                        vector<ll> back(test.size(),0);
                        for(int i=test.size()-1;i>=0;i--)
                        {
                            front[i]=test[i+1]-test[i];
                            if(i+2<test.size())front[i]+=front[i+2];
                        }
                        for(int i=1;i<test.size();i++)
                        {
                            back[i]=test[i]-test[i-1];
                            if(i-2<test.size())back[i]+=back[i-2];
                        }
                        ll fans=(int)1e18;
                        for(int i=0;i<test.size();i++)
                        {
                            ll cans=0;
                            ll ahead=test.size()-i-1;
                            ll behind=i;
                            if(ahead%2==1)
                            {
                                if(i+2<test.size())
                                {
                                    cans+=(front[i+2])/k;
                                }
                                if(i-2>=0)
                                {
                                    cans+=(back[i-2])/k;
                                }
                                if(i+1<test.size() && i-1>=0)
                                {
                                    cans+=(test[i+1]-test[i-1])/k;
                                }
                            }
                            else
                            {
                                if(i+1<test.size())
                                {
                                    cans+=(front[i+1])/k;
                                }
                                if(i-1>=0)
                                {
                                    cans+=(back[i-1])/k;
                                }
                            }
                            fans=min(fans,cans);
                        }
                        ans+=fans;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
