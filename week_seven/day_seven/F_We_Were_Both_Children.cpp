#include <bits/stdc++.h>
#define ll long long
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

        int cnt[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= n)
                cnt[ar[i]]++;
        }

        int ele_cnt[n+1]={0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                ele_cnt[j] += cnt[i];
            }
        }

        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            mx = max(mx, ele_cnt[i]);
        }

        cout << mx << '\n';
    }

    return 0;
}