#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }


        ll mn = LLONG_MAX;
        for (auto [first, second] : mp)
        {
            mn = min(mn, (n - second) * first);
        }

        if(mn>n) cout << n << '\n';
        else cout << mn << '\n';
    }

    return 0;
}