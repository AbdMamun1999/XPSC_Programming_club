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
        ll n, q;
        cin >> n >> q;
        vector<ll> ar(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int prev[n];
        prev[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            prev[i] = prev[i - 1] + ar[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll sum_L_to_R;
            if (l == 1)
            {
                sum_L_to_R = prev[r - 1];
            }
            else
            {
                sum_L_to_R = prev[r - 1] - prev[l - 1 - 1];
            }

            ll dif_N_to_Sum_L_to_R = prev[n - 1] - sum_L_to_R;
            ll res = (r - l + 1) * k;
            ll sum = res + dif_N_to_Sum_L_to_R;
            if (sum % 2 != 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}