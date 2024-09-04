#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll cnt = 0;
        ll ans[n];
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]>=i) {
                cnt+=(a[i]-i);
                ans[i] = i;
            } else {
                if(i-a[i] <= cnt) {
                    ans[i] = i;
                    cnt-=(i-a[i]);
                }else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    
    return 0;
}