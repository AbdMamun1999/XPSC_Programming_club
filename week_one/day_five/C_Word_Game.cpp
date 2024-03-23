/*https://codeforces.com/problemset/problem/1722/C*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s[3][n];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }

        map<string, int> cnt;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cnt[s[i][j]]++;
            }
        }

        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (i == 0)
                {
                    if (cnt[s[i][j]] == 1)
                    {
                        a += 3;
                    }
                    else if (cnt[s[i][j]] == 2)
                    {
                        a += 1;
                    }
                    else if (cnt[s[i][j]] == 3)
                    {
                        a += 0;
                    }
                }
                else if (i == 1)
                {
                    if (cnt[s[i][j]] == 1)
                    {
                        b += 3;
                    }
                    else if (cnt[s[i][j]] == 2)
                    {
                        b += 1;
                    }
                    else if (cnt[s[i][j]] == 3)
                    {
                        b += 0;
                    }
                }
                else if (i == 2)
                {
                    if (cnt[s[i][j]] == 1)
                    {
                        c += 3;
                    }
                    else if (cnt[s[i][j]] == 2)
                    {
                        c += 1;
                    }
                    else if (cnt[s[i][j]] == 3)
                    {
                        c += 0;
                    }
                }
            }
        }

        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}
