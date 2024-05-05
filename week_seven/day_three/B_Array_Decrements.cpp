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

        int dif = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
                dif = min(dif, a[i] - b[i]);
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                if (b[i] > 0)
                {
                    if (dif != a[i] - b[i])
                    {
                        flag = false;
                    }
                }
                else
                {
                    if (dif < a[i] - b[i])
                    {
                        flag = false;
                    }
                }
            }
            else if (a[i] < b[i])
                flag = false;
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}