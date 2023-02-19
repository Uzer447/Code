#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{




    int t;
    cin >> t;
    vector<pair<int,int>> v;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    pair<int, int> prev;
    // cin >> prev.first;
    // cin >> prev.second;
    prev.first=v[0].first;
    prev.second=v[0].second;
    int flag=0;
    if (prev.first != prev.second)
    {
        cout << "rated" << endl;
    }
    else
    {
        for(int i=1;i<t;i++)
        {
            pair<int,int> curr;
            // cin>>curr.first;
            // cin>>curr.second;
            curr.first=v[i].first;
            curr.second=v[i].second;
            if (curr.first!=curr.second)
            {
                flag=1;
                cout<<"rated"<<endl;
                break;
            }
            if(curr.second<prev.second)
            {
                flag=1;
                cout<<"unrated"<<endl;
                break;
            }
            prev.first=curr.first;
            prev.second=curr.second;
        }
        if(flag==0)
        cout<<"maybe"<<endl;
    }

    return 0;
}