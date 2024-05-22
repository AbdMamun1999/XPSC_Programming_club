#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
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
        ll a, b;
        cin >> a >> b;
        while (gcd(a, b) > 1)
        {
            b /= gcd(a, b);
        }

        if (b == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}