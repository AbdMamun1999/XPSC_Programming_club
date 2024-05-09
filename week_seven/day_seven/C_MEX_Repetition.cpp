#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll curSum = 0;
        deque<ll> dq;

        for (ll i = 0; i < n; i++)
        {
            curSum += ar[i];
            dq.push_back(ar[i]);
        }

        ll totalSum = (n * (n + 1)) / 2;

        for (ll i = 0; i < k % (n + 1); i++)
        {
            ll mex = totalSum - curSum;
            dq.push_front(mex);
            ll del = dq.back();
            dq.pop_back();
            curSum += mex;
            curSum -= del;
        }

        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }

    return 0;
}