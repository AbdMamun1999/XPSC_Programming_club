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
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = 0;
                for (int k = 0; k < m; k++)
                {
                    int dis = abs(s[i][k] - s[j][k]);
                    ans += dis;
                }
                res = min(res, ans);
            }
        }

        cout << res << '\n';
    }

    return 0;
}