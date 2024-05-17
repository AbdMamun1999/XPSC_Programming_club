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
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
        }
    }

    ll res;
    for (ll val : divisors)
    {
        if (lcm(val, n / val) == n)
            res = val;
    }

    cout << res << " " << n / res << '\n';

    return 0;
}
