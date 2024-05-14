#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n)
{
    if (n == 1)
        return false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return x * x == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> ar(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (ll i = 0; i < n; i++)
    {
        if (isPrime(sqrt(ar[i])) && isPerfectSquare(ar[i]))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}