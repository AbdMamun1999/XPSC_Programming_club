#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int m = a.size();
    int n = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (n == 1 && m == 1)
    {
        if (a == b)
            cout << 0 << '\n';
        else
            cout << 2 << '\n';
    }
    else
    {
        int x = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                x = i;
                break;
            }
        }

        if (x == -1)
            cout << n + m << '\n';
        else
            cout << (n - x) + (m - x) << endl;
    }

    return 0;
}