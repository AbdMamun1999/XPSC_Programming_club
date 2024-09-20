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
        map<ll,ll>cnt;
        ll mn = INT_MAX,mx = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }

        if(mx==mn) cout << n*(n-1) << '\n';
        else{
            cout << 2*(cnt[mx]*cnt[mn]) << '\n';
        }
    }
    
    
    return 0;
}