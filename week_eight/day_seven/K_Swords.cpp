#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
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

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    ll x = (mx * n) - sum;

    ll g = ar[0];
    for (int i = 1; i < n; i++)
    {
        g = gcd(sum, g);
    }

    if (n == 2)
    {
        cout << g << " " << x << '\n';
    }
    else
    {
        cout << x / g << " " << g << '\n';
    }

    return 0;
}