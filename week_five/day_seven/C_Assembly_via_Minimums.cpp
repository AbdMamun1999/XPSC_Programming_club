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
        int m;
        cin >> m;
        int n = (m * (m - 1)) / 2;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n, greater<int>());

        vector<int> newAr;
        for (int i = 1; i < m; i++)
        {
            int idx = (i * (i + 1)) / 2;
            newAr.push_back(ar[idx - 1]);
        }
        newAr.push_back(10e8);
        sort(newAr.begin(), newAr.end());

        for (int i : newAr)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}