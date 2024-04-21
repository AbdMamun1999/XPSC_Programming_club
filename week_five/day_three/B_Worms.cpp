#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int cnt[n];
    cnt[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        cnt[i] = cnt[i - 1] + ar[i];
    }

    int q;
    cin >> q;

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

        cout << res + 1 << '\n';
    }

    return 0;
}