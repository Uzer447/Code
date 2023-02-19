#include <bits/stdc++.h>
#define ll long long 
using namespace std;
// int longestCommonSubsequence(string text1, string text2) {
//         int m = text1.size(), n = text2.size();
//         int dp[m+1][n+1];
        
//         for(int i = 0; i <= m; i++) {
//             for(int j = 0; j <= n; j++) {
//                 if(i == 0 || j == 0) dp[i][j] = 0; // one or more of the lengths is 0
//                 else if(text1[i-1] == text2[j-1]) dp[i][j] = 1 + dp[i-1][j-1]; // found a common character
//                 else dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // take the best of both scenarios
//             }
//         }
//         return dp[m][n];
//     }
    int longestCommonSubsequence(string s1, string s2) {
        short m = s1.size(), n = s2.size();
        short dp[2][n+1];
        dp[1][0] = 0;
        for(short j = 0; j<= n; j++) dp[0][j]= 0;
        for(short i = 1; i <= m; ++i)
            for(short j = 1; j <= n; ++j) 
                dp[i%2][j] = s1[i-1] == s2[j-1] ? dp[(i-1)%2][j-1] + 1 : max(dp[(i-1)%2][j], dp[i%2][j-1]);
        return dp[(m)%2][n];
    }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            string a=s.substr(0,i);
            string b=s.substr(i);
            cout<<a<<" "<<b<<endl;
            reverse(b.begin(),b.end());
            ans=max(ans,longestCommonSubsequence(a,b));
            cout<<longestCommonSubsequence(a,b)<<endl;
        }
        cout<<ans<<endl;
        // int mid=n/2;
        // string a=s.substr(0,mid);
        // string b=s.substr(mid);
        // reverse(b.begin(),b.end());
        // //cout<<a<<" "<<b<<endl;
        // int ans=longestCommonSubsequence(a,b);
        // cout<<ans<<endl;
    }
    
    return 0;
}






























// #include <bits/stdc++.h>
// #define ll long long 
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int ind=-1;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(s[i]=='1')
//             {
//                 ind=i;
//                 break;
//             }
//         }
//         if(ind==-1)
//         {
//             cout<<1<<endl;
//         }
//         else
//         {int ans=0;
//         for(int i=ind;i>0;i--)
//         {
//             k--;
//             if(k==0)
//             break;
//             if(s[i]=='1' && s[i-1]=='0')
//             ans++;
//             else if(s[i]=='0' && s[i-1]=='1')
//             ans++;
            
//         }
//         cout<<ans<<endl;}
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// #define ll long long 
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int curr=0;
//         int maxlen=0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='1')
//             {
//                 curr++;
//             }
//             else
//             {
//                 maxlen=max(maxlen,curr);
//                 curr=0;
//             }
//         }
//         maxlen=max(maxlen,curr);
//         if(maxlen==0)
//         {
//             cout<<1<<endl;
//         }
//         else
//         cout<<k-maxlen<<endl;
//     }
    
//     return 0;
// }