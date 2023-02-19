#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n,1));
    //int v[n][n];
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //        v[i][j]=1;
    //     }
        
    // }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            v[i][j]=v[i-1][j]+v[i][j-1];
        }
    }
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<v[n-1][n-1]<<endl;





    return 0;
}