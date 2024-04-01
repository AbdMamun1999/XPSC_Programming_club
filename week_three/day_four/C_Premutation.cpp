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
        int ar[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i][n - 2]]++;
        }

        int mx_cnt = 0;
        int number;
        for (pair<int, int> i : mp)
        {
            if (mx_cnt <= i.second)
            {
                number = i.first;
                mx_cnt = i.second;
            }
        }

        int is_mising[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (number == ar[i][j])
                {
                    is_mising[i + 1]++;
                }
            }
        }

        int res;
        for (int i = 1; i < n + 1; i++)
        {
            if (is_mising[i] == 0)
            {
                res = i;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << ar[res - 1][i] << " ";
        }
        cout << number << '\n';
    }

    return 0;
}