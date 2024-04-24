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
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        bool flag = false;
        int ans = 0;
        for (int j = 1; j < n - 1; j++)
        {
            if (ar[j - 1] < ar[j] && ar[j] > ar[j + 1])
            {
                flag = true;
                ans = j;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << '\n';
            cout << ans << " " << ans + 1 << " " << ans + 2 << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}