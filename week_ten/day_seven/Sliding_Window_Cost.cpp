#include <bits/stdc++.h>
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    pbds<pair<ll, ll>> p;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        p.insert({ar[r], r});
        if (r - l + 1 == k)
        {
            ll mid = k / 2;
            auto it = p.find_by_order(mid);
            ll cnt = 0;
            for (pair<ll, ll> val : p)
            {
                cnt += abs(val.first - it->first);
            }

            cout << cnt << " ";
            p.erase({ar[l], l});
            l++;
        }
        r++;
    }

    return 0;
}