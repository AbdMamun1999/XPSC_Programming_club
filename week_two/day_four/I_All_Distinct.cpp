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

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cnt[ar[i]]++;
        }

        while (n > cnt.size())
        {
            n = n - 2;
        }

        cout << n << '\n';
    }

    return 0;
}