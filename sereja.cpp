#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int left=0;
    int right=n-1;
    int s=0;
    int d=0;
    int turn=1;
    while(left<=right)
    {
        if(turn%2==1)
        {
            if(v[left]>v[right])
            {
                s+=v[left];
                left++;
            }
            else{
                s+=v[right];
                right--;
            }
            turn++;
            

        }
        else{
             if(v[left]>v[right])
            {
                d+=v[left];
                left++;
            }
            else{
                d+=v[right];
                right--;
            }
            turn++;
        }

    }
    cout<<s<<" "<<d<<endl;
    return 0;
}