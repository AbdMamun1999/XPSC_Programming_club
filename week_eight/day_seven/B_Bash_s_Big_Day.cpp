#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

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

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= ar[i]; j++)
        {
            if (ar[i] % j == 0)
            {
                cnt[j]++;
                while (ar[i] % j == 0)
                {
                    ar[i] /= j;
                }
            }
        }

        if (ar[i] > 1)
            cnt[ar[i]]++;
    }

    int ans = 1;
    for (pair<int, int> val : cnt)
    {
        ans = max(ans, val.second);
    }

    cout << ans << '\n';

    return 0;
}
