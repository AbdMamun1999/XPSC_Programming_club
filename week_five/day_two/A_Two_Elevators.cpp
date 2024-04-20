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
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = abs(a - 1);
        int d2 = abs(b - c) + abs(c - 1);
        if (d1 < d2)
            cout << 1 << '\n';
        else if (d2 < d1)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }

    return 0;
}