/*https://atcoder.jp/contests/abc051/submissions/me*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;
    long long sum = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int x = s - i - j;
            if (x >= 0 && x <= k)
                sum++;
        }
    }

    cout << sum << '\n';
    return 0;
}