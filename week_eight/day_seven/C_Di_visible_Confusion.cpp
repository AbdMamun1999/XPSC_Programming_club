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
        ll n;
        cin >> n;
        ll ar[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        bool flag = true;
        for (ll i = 1; i <= min(n, 21LL); i++)
        {
            bool ok = false;
            for (ll j = 2; j <= i + 1; j++)
            {
                if (ar[i] % j != 0)
                {
                    ok = true;
                    break;
                }
            }

            if (!ok)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}