#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long l, r;
    cin >> l >> r;
    if (r - l >= 1)
    {
        cout << "YES" << '\n';
        for (long long i = l; i < r; i += 2)
        {
            cout << i << " " << i + 1 << '\n';
        }
    }
    else
        cout << "NO" << '\n';

    return 0;
}