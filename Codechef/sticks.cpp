#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int t=rand()%50 + 1;
    while(t--)
    {
        int n=rand()%10000 +1;
        cout<<n<<" ";
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            v[i]=rand()%10000 +1;
            cout<<v[i]<<endl;
        }
        
    }
    
    return 0;
}