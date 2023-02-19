#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    vector<vector<char>> board(8,vector<char> (8,'.'));
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<8;j++)
        {
            char c;
            cin>>c;
            board[i][j] = c;
        }
    }
    unordered_map<char,int> upper;
    unordered_map<char,int> lower;
    upper['Q']=9;
    upper['R']=5;
    upper['B']=3;
    upper['N']=3;
    upper['P']=1;
    upper['K']=0;
    lower['q']=9;
    lower['r']=5;
    lower['b']=3;
    lower['n']=3;
    lower['p']=1;
    lower['k']=0;
    ll weightA=0;
    ll weightB=0;
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<8;j++)
        {
            char c=board[i][j];
            if(c>='A' && c<='Z')
            {
                weightA+=upper[c];
            }
            else if(c>='a' && c<='z')
            {
                weightB+=lower[c];
            }
        }
    }
    if(weightA>weightB)
    {
        cout<<"White"<<endl;
    }
    else if(weightA<weightB)
    {
        cout<<"Black"<<endl;
    }
    else
    cout<<"Draw"<<endl;

    return 0;
}