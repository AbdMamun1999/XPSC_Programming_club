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
        int n, x;
        cin >> n >> x;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n);

        auto ok = [&](ll mid)
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += (ar[i] < mid ? mid - ar[i] : 0);
            }
            return cnt <= x;
        };

        ll l = 1,
           r = 2e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}