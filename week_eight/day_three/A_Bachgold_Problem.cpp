#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int k = n / 2;
        cout << k << '\n';
        for (int i = 1; i <= k; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        n = n - 3;
        int k = n / 2;
        cout << k + 1 << '\n';
        for (int i = 1; i <= k; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }

    return 0;
}