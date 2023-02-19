#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    st.push(s[0]-'0');
    for(int i=1; i<n; i++)
    {
        int x=s[i]-'0';
        if(x==1 && !st.empty() && st.top()==0)
        {
            st.pop();
        }
        else if(x==0 && !st.empty() && st.top()==1)
        {
            st.pop();
        }
        else
        st.push(x);
    }
    cout<<st.size()<<endl;
    return 0;
}