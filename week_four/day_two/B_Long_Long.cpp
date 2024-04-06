/*https://codeforces.com/problemset/problem/1843/B*/
#include <bits/stdc++.h>
#define ll long long
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

        bool flag = false;
        ll sum = 0;
        ll ac = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 0)
                continue;
            else if (ar[i] < 0)
            {
                if (flag == false)
                    ac++;
                sum += abs(ar[i]);
                flag = true;
            }
            else
            {
                sum += ar[i];
                flag = false;
            }
        }

        cout << sum << " " << ac << '\n';
    }

    return 0;
}