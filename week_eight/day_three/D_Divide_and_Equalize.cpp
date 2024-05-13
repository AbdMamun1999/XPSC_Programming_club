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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {

            for (int j = 2; j * j <= ar[i]; j++)
            {
                if (ar[i] % j == 0)
                {
                    while (ar[i] % j == 0)
                    {
                        cnt[j]++;
                        ar[i] /= j;
                    }
                }
            }

            if (ar[i] > 1)
                cnt[ar[i]]++;
        }
        bool ok = true;
        for (auto val : cnt)
        {
            if (val.second % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}