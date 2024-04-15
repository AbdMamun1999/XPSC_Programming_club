#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll cns = 0, ans = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= q)
            {
                cns++;
            }
            else
            {
                if (cns >= k)
                {
                    ll dif = cns - k + 1;
                    v.push_back(dif);
                }
                cns = 0;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            ans += (v[i] * (v[i] + 1)) / 2;
        }

        if (cns >= k)
        {
            ll dif = cns - k + 1;
            ans += (dif * (dif + 1)) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}