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
        int n, q;
        cin >> n >> q;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i]].push_back(i);
        }

        while (q--)
        {
            int i, j;
            cin >> i >> j;

            if (!mp.count(i) || !mp.count(j))
                cout << "NO" << endl;
            else
            {
                if (mp[j].back() >= mp[i].front())
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }

    return 0;
}