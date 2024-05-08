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
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<int> mx(n);
        mx[0] = abs(ar[0] - ar[1]);
        for (int i = 1; i < n - 1; i++)
        {
            mx[i] = max(abs(ar[i] - ar[i - 1]), abs(ar[i] - ar[i + 1]));
        }

        mx[n - 1] = abs(ar[n - 1] - ar[n - 2]);

        int mn = INT_MAX;
        for (int val : mx)
        {
            mn = min(mn, val);
        }

        cout << mn << '\n';
    }

    return 0;
}