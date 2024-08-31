#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    // ll t;
    // cin >> t;
    // while (t--)
    // {
        ll a,b,n;
        cin >> a >> b >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll ans = 0,c = b;

        for (ll i = 0; i < n; i++)
        {
            c+=ar[i];

        }

        cout << ans + b  << '\n';
    // }
    return 0;
}