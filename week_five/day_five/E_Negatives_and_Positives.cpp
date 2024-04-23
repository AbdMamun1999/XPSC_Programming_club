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

        ll sum = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs(ar[i]);
            if (ar[i] <= 0)
            {
                neg++;
                ar[i] = ar[i] * -1;
            }
        }

        sort(ar, ar + n);

        if (neg % 2 == 0)
            cout << sum << '\n';
        else
        {
            cout << sum - (ar[0] * 2) << '\n';
        }
    }
    return 0;
}