// https://codeforces.com/problemset/problem/1676/E
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(ar[i]);
        }

        sort(v.begin(), v.end(), greater<int>());

        int cnt[n];
        cnt[0] = v.front();
        for (int i = 1; i < n; i++)
        {
            cnt[i] = cnt[i - 1] + v[i];
        }

        while (q--)
        {
            int k;
            cin >> k;
            int l = 0, r = n - 1, res = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (k <= cnt[mid])
                {
                    res = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (res == -1)
                cout << -1 << '\n';
            else
                cout << res + 1 << '\n';
        }
    }

    return 0;
}