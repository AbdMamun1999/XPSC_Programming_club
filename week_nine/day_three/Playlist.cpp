#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int l = 0, r = 0, ans = 0, cnt = 0;
    map<int, int> freq_cnt;
    while (r < n)
    {
        freq_cnt[ar[r]]++;
        if (freq_cnt[ar[r]] > 1)
        {
            ans = max(ans, cnt);
            while (freq_cnt[ar[r]] != 1)
            {
                freq_cnt[ar[l]]--;
                l++;
            }

            cnt = r - l + 1;
        }
        else
        {
            cnt = r - l + 1;
            ans = max(cnt, ans);
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}