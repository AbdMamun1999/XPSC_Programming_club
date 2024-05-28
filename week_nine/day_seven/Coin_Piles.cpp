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
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            if (a > (b * 2) || (a + b) % 3 != 0)
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
        else
        {
            if (b > (a * 2) || (a + b) % 3 != 0)
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
    }

    return 0;
}