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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        if (s % n <= b)
            if (a * n + b >= s)
            {
                cout << "YES" << '\n';
            }
            else
                cout << "NO" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}