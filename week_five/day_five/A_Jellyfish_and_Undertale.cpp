#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n;
    cin >> a >> b >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int res = b;
    for (int i = 0; i < n; i++)
    {
        res += min(a - 1, ar[i]);
    }

    cout << res << '\n';

    return 0;
}