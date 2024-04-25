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

        ll pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < neg && pos == 0)
                neg += ar[i];
            else
            {
                pos += ar[i];
                if (pos < 0)
                {
                    neg += pos;
                    pos = 0;
                }
            }
        }

        cout << pos << '\n';
    }

    return 0;
}