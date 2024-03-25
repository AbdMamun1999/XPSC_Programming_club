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

        for (int j = 0; j < n; j++)
        {
            int m;
            string s;
            cin >> m >> s;

            int x = ar[j];

            for (char ch : s)
            {
                if (ch == 'U')
                {
                    if (x == 0)
                    {
                        x = 9;
                    }
                    else
                    {
                        x--;
                    }
                }
                else if (ch == 'D')
                {
                    if (x == 9)
                    {
                        x = 0;
                    }
                    else
                    {
                        x++;
                    }
                }
            }
            ar[j] = x;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}