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
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;

        if (x - d <= 1 && y - d <= 1)
            cout << -1 << '\n';
        else if (x - d <= 1 && x + d >= n)
            cout << -1 << '\n';
        else if (y - d <= 1 && y + d >= m)
            cout << -1 << '\n';
        else if (x + d >= n && y + d >= m)
            cout << -1 << '\n';
        else
            cout << n + m - 2 << '\n';
    }

    return 0;
}