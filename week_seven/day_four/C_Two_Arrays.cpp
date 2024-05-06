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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n);

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            else if (a[i] + 1 == b[i])
                continue;
            else if (a[i] + 1 < b[i])
                flag = false;
            else if (a[i] > b[i])
                flag = false;
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}