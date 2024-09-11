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

        int mx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            mx = max(mx, ar[i]);
        }

        cout << mx + ar[n - 1] << '\n';
    }

    return 0;
}