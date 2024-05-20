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

        int index[1005] = {0};
        for (int i = 0; i < n; i++)
        {
            index[ar[i]] = i + 1;
        }

        int res = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (index[i] > 0 and index[j] > 0 and gcd(i, j) == 1)
                {
                    res = max(res, index[i] + index[j]);
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}