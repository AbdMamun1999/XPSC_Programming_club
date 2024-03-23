/*https://codeforces.com/contest/440/problem/A*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ar[n + 1];

    for (int i = 1; i < n; i++)
    {
        cin >> ar[i];
    }

    bool cnt[n + 1] = {0};
    for (int i = 1; i < n; i++)
    {
        cnt[ar[i]] = 1;
    }

    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!cnt[i])
            res = i;
    }
    cout << res << "\n";

    return 0;
}