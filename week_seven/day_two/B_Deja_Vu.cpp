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
        int n, q;
        cin >> n >> q;
        int a[n], x[q];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }

        bool visited[30] = {false};
        for (int i = 0; i < q; i++)
        {
            if (visited[x[i]])
                continue;
            visited[x[i]] = true;
            for (int j = 0; j < n; j++)
            {
                int power = pow(2, x[i]);
                if (a[j] % power == 0)
                {
                    a[j] += pow(2, x[i] - 1);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}