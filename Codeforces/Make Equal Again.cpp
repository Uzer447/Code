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
int mostFrequent(vector<int> &arr, int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int max_count = 0, res = -1;
    for(int i=0;i<n;i++)
    {
        if (hash[arr[i]] > max_count)
        {
            res = arr[i];
            max_count = hash[arr[i]];
        }
    }
    return res;
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
        cin >> n;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        int left=0,right=n-1,leftcnt=0,rightcnt=0;
        while(left<n && v[left]==v[0])
        {
            left++;
            leftcnt++;
        }
        while(right>=0 && v[right]==v[n-1])
        {
            right--;
            rightcnt++;
        }
        if(v[0]==v[n-1])
        {
            cout<<max(0,n-(leftcnt+rightcnt))<<endl;
        }
        else
        {
            cout<<min(n-rightcnt,n-leftcnt)<<endl;
        }
    }

    return 0;
}
