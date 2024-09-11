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
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        while (r > 1)
        {
            r /= 2;
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}