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
        string a, b;
        cin >> a >> b;

        int n = a.size();
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == '0' && a[i + 1] == '1')
            {
                if (b[i] == '0' && b[i + 1] == '1')
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}