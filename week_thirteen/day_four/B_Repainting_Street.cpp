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
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i]]++;
        }

        int mx = 0;
        int val = 0;
        for (auto [first, second] : mp)
        {
            if (second > mx)
            {
                mx = second;
                val = first;
            }
        }

        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != val)
                cnt++;

            if (cnt != 0 && cnt < k & ar[i] == val)
            {
                ans++;
                cnt = 0;
            }
            else if (cnt == k)
            {
                ans++;
                cnt = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}