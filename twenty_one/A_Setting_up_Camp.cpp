#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;

        bool flag = true;
        ll ans = a;
        if(b%3==0){
            ans+=(b/3);
        }else{
            ll x = 3-b%3;
            if(c>=x){
                b+=x;
                c-=x;
                ans+=(b/3);
            }else flag = false;
        }

        ans+= ceil((double)c/(double)3);
        
        if(flag) cout << ans << '\n';
        else cout << -1 << '\n';
    }
    

    return 0;
}