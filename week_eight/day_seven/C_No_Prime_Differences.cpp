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
        int n, m;
        cin >> n >> m;
        int ar[n][m];
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ar[i][j] = x;
                x++;
            }
        }

        int ar2[n][m];
        int row = n / 2;
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 0; j < m; j++)
            {
                ar2[i][j] = ar[row][j];
            }
            row++;
        }

        row = 0;
        for (int i = 1; i < n; i += 2)
        {
            for (int j = 0; j < m; j++)
            {
                ar2[i][j] = ar[row][j];
            }
            row++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ar2[i][j] << " ";
            }
            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}