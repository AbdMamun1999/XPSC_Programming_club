/*https://codeforces.com/problemset/problem/621/A*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll ar[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    if (sum % 2 == 0)
        cout << sum << "\n";
    else
    {
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = sum - ar[i];
            if (x % 2 == 0)
                res = max(res, x);
        }
        cout << res << "\n";
    }
    return 0;
}