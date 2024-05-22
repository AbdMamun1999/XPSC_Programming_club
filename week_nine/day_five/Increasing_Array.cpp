#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

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

    ll res = 0;
    ll mx = ar[0];
    for (ll i = 1; i < n; i++)
    {
        if (mx > ar[i])
        {
            res += (mx - ar[i]);
        }
        else
        {
            mx = ar[i];
        }
    }

    cout << res << nl;

    return 0;
}