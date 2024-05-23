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

    ll n;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll mx = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, ar[i]);
    }

    ll x = (mx * n);
    for (int i = 0; i < n; i++)
    {
        x -= ar[i];
    }

    ll g = mx - ar[0];
    for (int i = 1; i < n; i++)
    {
        g = gcd(mx - ar[i], g);
    }

    cout << x / g << " " << g << '\n';

    return 0;
}