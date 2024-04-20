#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    while (q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1, res = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (k == ar[mid])
            {
                res = mid;
                break;
            }
            else if (k < ar[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (res != -1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}