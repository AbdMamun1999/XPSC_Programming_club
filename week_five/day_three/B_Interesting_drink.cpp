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

    sort(ar, ar + n);

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
            if (k >= ar[mid])
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (res == -1)
            cout << 0 << '\n';
        else
            cout << res + 1 << '\n';
    }

    return 0;
}