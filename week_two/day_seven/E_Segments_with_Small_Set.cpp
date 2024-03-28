#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    map<ll, ll> mp;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        mp[ar[r]]++;
        if (mp.size() <= k)
        {
            ans += (r - l + 1);
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[ar[l]]--;
                if (mp[ar[l]] == 0)
                {
                    mp.erase(ar[l]);
                }
                l++;
            }

            if (mp.size() <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';

    return 0;
}