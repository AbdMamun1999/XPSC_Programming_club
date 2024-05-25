#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    map<ll, ll> mp;
    mp[0] = 1;
    ll cnt = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += ar[i];
        cnt += mp[sum - x];
        mp[sum]++;
    }

    cout << cnt << '\n';

    return 0;
}
