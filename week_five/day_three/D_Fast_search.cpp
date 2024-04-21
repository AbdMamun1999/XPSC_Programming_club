#include <bits/stdc++.h>
#define ll long long
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
        int a, b;
        cin >> a >> b;

        // find a
        ll l = 0, r = n - 1, res_a = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a <= ar[mid])
            {
                res_a = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        // find b
        l = 0, r = n - 1;
        ll res_b = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (b >= ar[mid])
            {
                res_b = mid;
                l = mid + 1;
            }
            else if (b < ar[mid])
            {
                r = mid - 1;
            }
        }
        if (res_a == -1 || res_b == -1)
            cout << 0 << " ";
        else
            cout << (res_b - res_a) + 1 << " ";
    }

    return 0;
}