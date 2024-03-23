/*https://codeforces.com/contest/1604/problem/A*/
#include <bits/stdc++.h>
#define ll long long
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

        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll ac = 0;
        for (int i = 0; i < n; i++)
        {

            if (ar[i] > (i + 1))
            {
                ac = max(ac, ar[i] - (i + 1));
            }
        }

        cout << ac << endl;
    }

    return 0;
}
