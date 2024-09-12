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
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (n == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            ll cnt_1 = 0;
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                if (ar[i] == 1)
                    cnt_1++;
                sum += ar[i];
            }

            sum = sum - n;

            if (sum >= cnt_1)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}