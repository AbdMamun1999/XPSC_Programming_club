#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
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
        int rem = sum % n;
        if (rem < 0)
            rem += n;
        cnt += mp[rem];
        mp[rem]++;
    }

    cout << cnt << '\n';

    return 0;
}