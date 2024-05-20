#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll gcd_even = ar[0];
        for (ll i = 2; i < n; i += 2)
        {
            gcd_even = gcd(gcd_even, ar[i]);
        }

        bool flag = false;
        if (gcd_even > 1)
        {
            for (ll i = 1; i < n; i += 2)
            {
                if (ar[i] % gcd_even == 0)
                {
                    flag = true;

                    break;
                }
            }
        }

        if (!flag && gcd_even != 1)
        {
            cout << gcd_even << '\n';
        }
        else
        {
            ll gcd_odd = ar[1];
            for (ll i = 3; i < n; i += 2)
            {
                gcd_odd = gcd(gcd_odd, ar[i]);
            }

            bool flag2 = false;
            if (gcd_odd > 1)
            {
                for (ll i = 0; i < n; i += 2)
                {
                    if (ar[i] % gcd_odd == 0)
                    {
                        flag2 = true;
                        break;
                    }
                }
            }

            if (!flag2 && gcd_odd != 1)
            {
                cout << gcd_odd << '\n';
            }
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}