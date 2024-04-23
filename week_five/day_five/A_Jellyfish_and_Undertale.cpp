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
        ll a, b, n;
        cin >> a >> b >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll res = b;
        for (ll i = 0; i < n; i++)
        {
            res += min(a - 1, ar[i]);
        }

        cout << res << '\n';
    }

    return 0;
}