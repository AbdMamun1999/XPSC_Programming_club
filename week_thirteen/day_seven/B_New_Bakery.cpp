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
    ll n, a, b;
    cin >> n >> a >> b;

    if (a >= b)
        cout << n * a << '\n';
    else
    {

        ll modi = b - a;

        if (modi >= n)
        {
            ll ans = (n * b) - ((n - 1) * n) / 2;
            cout << ans << '\n';
        }
        else
        {
            ll ans = (modi * b) - ((modi - 1) * modi) / 2;
            cout << ans + (n - modi) * a << '\n';
        }
    }
    }

    return 0;
}