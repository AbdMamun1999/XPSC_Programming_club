#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int l = 0, r = 0, sum = 0, cnt = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum == x)
        {
            cnt++;
        }
        else if (sum > x)
        {
            while (sum > x)
            {
                sum -= ar[l];
                l++;
            }
            if (sum == x)
                cnt++;
        }
        r++;
    }

    cout << cnt << '\n';

    return 0;
}