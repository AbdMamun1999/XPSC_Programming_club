#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

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
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += ar[i];
        }

        ll prev[n];
        prev[0] = ar[0];
        for (ll i = 1; i < n; i++)
        {
            prev[i] = prev[i - 1] + ar[i];
        }

        ll ans = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            ans = max(gcd(prev[i], sum - prev[i]), ans);
        }

        cout << ans << '\n';
    }

    return 0;
}
