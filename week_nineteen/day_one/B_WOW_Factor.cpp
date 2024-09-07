#include<bits/stdc++.h>
#define ll long long
using  namespace  std;

int main()
{
    string s;
    cin>>s;
    
    ll cnt = 0, ans = 0, mx = 0;
    for(int i=s.size()-2;i>=0;i--)
    {
        if(s[i]=='v' && s[i+1]=='v')
        {
            cnt++;
            ans += mx;
        }
        else if(s[i]=='o'){
            mx = mx + cnt;
        }
    }
    cout<<ans<<'\n';
}
