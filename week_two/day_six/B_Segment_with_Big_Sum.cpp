#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll l = 0, r = 0, sum = 0, ans = LLONG_MAX;
    while (r < n)
    {
        sum += ar[r];

        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
            while (sum >= s && l < r)
            {
                sum -= ar[l];
                l++;
                if (sum >= s)
                {
                    ans = min(ans, r - l + 1);
                }
            }
        }
        r++;
    }

    if (ans == LLONG_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}