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

    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(ar[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= s)
                    break;
                auto it = ml.find(ar[l]);
                ml.erase(it);
                l++;
            }

            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}