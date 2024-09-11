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
        ll n, k;
        cin >> n >> k;

        ll step = 0;

        while (n)
        {
            if (n % k == 0)
            {
                n /= k;
                step++;
            }
            else
            {
                ll rem = n % k;
                step += rem;
                n -= rem;
            }
        }

        cout << step << '\n';
    }

    return 0;
}