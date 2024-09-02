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
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (ar[0] == ar[n - 1])
        {
            int first = 0;
            for (int i = 0; i < n; i++)
            {
                if (ar[0] == ar[i])
                    first++;
            }

            if (first >= k)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            int first = 0;
            int j = 0;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == ar[0])
                    first++;
                if (k == first)
                {
                    j = i;
                    break;
                }
            }

            int last = 0;
            for (int i = n - 1; i > j; i--)
            {
                if (ar[i] == ar[n - 1])
                    last++;
            }

            if (k == first && last >= k)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}