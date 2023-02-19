#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int lefttop(int n,int m, vector<vector<int>> &v,int i,int j)
{
    int sum=0;
    while(j>=0 && i>=0)
    {
        sum+=v[i][j];
        i--;
        j--;
    }
    return sum;
}
int righttop(int n,int m, vector<vector<int>> &v,int i,int j)
{
    int sum=0;
    while(j<m && i>=0)
    {
        sum+=v[i][j];
        i--;
        j++;
    }
    return sum;
}
int leftbottom(int n,int m, vector<vector<int>> &v,int i,int j)
{
    int sum=0;
    while(j>=0 && i<n)
    {
        sum+=v[i][j];
        i++;
        j--;
    }
    return sum;
}
int rightbottom(int n,int m, vector<vector<int>> &v,int i,int j)
{
    int sum=0;
    while(j<m && i<n)
    {
        sum+=v[i][j];
        i++;
        j++;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int a;
                cin>>a;
                v[i][j] =a;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp=lefttop(n,m,v,i,j) + righttop(n,m,v,i,j) + rightbottom(n,m,v,i,j) + leftbottom(n,m,v,i,j);
                temp-=v[i][j]*3;
                sum=max(sum,temp);
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}