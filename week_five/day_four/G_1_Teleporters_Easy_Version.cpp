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
        int n, c;
        cin >> n >> c;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int cnt[n];
        for (int i = 0; i < n; i++)
        {
            cnt[i] = ar[i] + (i + 1);
        }

        sort(cnt, cnt + n);

        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += cnt[i];
            if (sum <= c)
                ans++;
            else
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}